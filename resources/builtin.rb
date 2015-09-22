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
        return imgs.length == 1 ? imgs[0] : imgs
      end
      
      Fiber.yield
    end
  end    
end
