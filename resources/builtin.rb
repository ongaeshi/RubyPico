# coding: utf-8
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
end

module ImageUtil
  def self.vertical(imgs)
    width = imgs[0].width
    height = imgs.reduce(0) { |a, e| a += fith(e, width) }

    Image.render(width, height) do
      y = 0
      imgs.each_with_index do |img, i|
        h = fith(img, width)
        img.draw(0, y, width, h)
        y += h
      end
    end
  end

  def self.horizontal(imgs)
    height = imgs[0].height
    width  = imgs.reduce(0) { |a, e| a += fitw(e, height) }

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
  end

  private

  def self.fitw(img, height)
    (img.width.to_f / img.height) * height
  end

  def self.fith(img, width)
     (img.height.to_f / img.width) * width
  end
end
