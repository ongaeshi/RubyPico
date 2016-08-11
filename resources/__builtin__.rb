class Image
  def square(x_offset = 0, y_offset = 0)
    l = width > height ? height : width
    cx = width / 2
    cy = height / 2
    crop(cx - l/2 + x_offset, cy - l/2 + y_offset, l, l)
  end

  def aspect_ratio
    width / height
  end
end

module ImageUtil
  def self.vertical(imgs, base_index = 0)
    width = imgs[base_index].width
    height = imgs.reduce(base_index) { |a, e| a += fith(e, width) }

    Image.render(width, height) do
      y = 0
      imgs.each_with_index do |img, i|
        h = fith(img, width)
        img.draw(0, y, width, h)
        y += h
      end
    end
  end

  def self.horizontal(imgs, base_index = 0)
    height = imgs[base_index].height
    width  = imgs.reduce(base_index) { |a, e| a += fitw(e, height) }

    Image.render(width, height) do
      x = 0
      imgs.each_with_index do |img, i|
        w = fitw(img, height)
        img.draw(x, 0, w, height)
        x += w
      end
    end
  end

  def self.grid(imgs)
    grid = grid_size(imgs.length)

    width = imgs[0].width
    height = imgs[0].height

    ygrid = (imgs.length / grid).to_i 
    ygrid += 1 if imgs.length % grid > 0

    Image.render(width*grid, height*ygrid) do 
      (0...grid).each do |y|
        (0...grid).each do |x|
          img = imgs[y*grid + x]
          img.draw(x*width, y*height, width, height) if img
        end
      end
    end
  end

  private

  def self.fitw(img, height)
    (img.width.to_f / img.height) * height
  end

  def self.fith(img, width)
     (img.height.to_f / img.width) * width
  end

  def self.grid_size(num)
    # Math.sqrt
    array = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
    array.each_with_index do |e, i|
      return i + 1 if num <= e
    end

    array.length
  end
end

module URI
  def self.encode_www_form(enum)
    enum.map do |k,v|
      if v.nil?
        encode_www_form_component(k)
      elsif v.respond_to?(:to_ary)
        v.to_ary.map do |w|
          str = encode_www_form_component(k)
          unless w.nil?
            str += '='
            str += encode_www_form_component(w)
          end
        end.join('&')
      else
        str = encode_www_form_component(k.to_s)
        str += '='
        str += encode_www_form_component(v)
      end
    end.join('&')
  end
end

module Browser
  def self.json(url)
    JSON::parse(get(url))
  end
end

module Kernel
  ##
  # Invoke method +print+ on STDOUT and passing +*args+
  # Customize for Image
  #
  # ISO 15.3.1.2.10
  def print(*args)
    i = 0
    len = args.size
    while i < len
      if args[i].is_a?(Image)
        __printstr__ args[i]
      else
        __printstr__ args[i].to_s
      end
      i += 1
    end
  end

  ##
  # Invoke method +puts+ on STDOUT and passing +*args*+
  # Customize for Image
  #
  # ISO 15.3.1.2.11
  def puts(*args)
    i = 0
    len = args.size
    while i < len
      if args[i].is_a?(Image)
        __printstr__ args[i] 
        __printstr__ "\n"
      else
        s = args[i].to_s
        __printstr__ s
        __printstr__ "\n" if (s[-1] != "\n")
      end
      i += 1
    end
    __printstr__ "\n" if len == 0
    nil
  end
end
