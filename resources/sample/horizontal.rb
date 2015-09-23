# Please return the Image object in the "def convert"

def convert
  imgs = Image.pick_from_library(8)

  HEIGHT = imgs[0].height
  WIDTH  = imgs.reduce(0) { |a, e| a += e.fitw(HEIGHT) }

  Image.render(WIDTH, HEIGHT) do 
    x = 0
    imgs.each_with_index do |img, i| 
      w = img.fitw(HEIGHT)
      img.draw(x, 0, w, HEIGHT)
      x += w
    end
  end
end

class Image
  def fitw(h)
     (width.to_f / height) * h
  end
end
