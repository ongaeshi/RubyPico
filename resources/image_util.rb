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

