module ImageUtil
  def self.vertical(imgs, base_index = 0)
    width = imgs[base_index].width
    height = imgs.reduce(base_index) { |a, e| a += e.fith(width) }

    Image.render(width, height) do
      y = 0
      imgs.each_with_index do |img, i|
        h = img.fith(width)
        img.draw(0, y, width, h)
        y += h
      end
    end
  end

  def self.horizontal(imgs, base_index = 0)
    height = imgs[base_index].height
    width  = imgs.reduce(base_index) { |a, e| a += e.fitw(height) }

    Image.render(width, height) do
      x = 0
      imgs.each_with_index do |img, i|
        w = img.fitw(height)
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

  def self.grid_size(num)
    # Math.sqrt
    array = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
    array.each_with_index do |e, i|
      return i + 1 if num <= e
    end

    array.length
  end
end

