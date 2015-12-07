def make_convert_to_fiber
  MainLoop.new
end

class MainLoop
  def initialize
    @fiber = Fiber.new do
      Kernel.convert
    end
  end

  def execute
    @fiber.resume if @fiber.alive?
  end

  def continue?
    @fiber.alive?
  end
end

class Image
  def self.pick_from_library(num = 1)
    start_pick_from_library(num)

    loop do
      imgs = receive_picked

      if imgs
        return num == 1 ? imgs[0] : imgs
      end
      
      Fiber.yield
    end
  end    

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

class Time
  def sunday?;  wday == 0 end
  def monday?;  wday == 1 end
  def tuesday?;  wday == 2 end
  def wednesday?;  wday == 3 end
  def thursday?;  wday == 4 end
  def friday?;  wday == 5 end
  def saturday?;  wday == 6 end
end

class String
  def %(args)
    if args.is_a? Array
      sprintf(self, *args)
    else
      sprintf(self, args)
    end
  end
end

class Popup
  def self.input(msg)
    start_popup_input(msg)

    loop do
      result = receive_picked
      return result if result
      Fiber.yield
    end
  end
  
  def self.msg(msg)
    start_popup_msg(msg)

    loop do
      result = receive_picked
      return if result
      Fiber.yield
    end
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
        str = encode_www_form_component(k)
        str += '='
        str += encode_www_form_component(v)
      end
    end.join('&')
  end
end
