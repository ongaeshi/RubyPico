# Please return the Image object in the "def convert"

def convert
  imgs = Image.pick_from_library(8)

  WIDTH = imgs[0].width
  HEIGHT = imgs.reduce(0) { |a, e| a += e.fith(WIDTH) }

  Image.render(WIDTH, HEIGHT) do 
    y = 0
    imgs.each_with_index do |img, i| 
      h = img.fith(WIDTH)
      img.draw(0, y, WIDTH, h)
      y += h
    end
  end
end

class Image
  def fith(w)
     (height.to_f / width) * w
  end
end
