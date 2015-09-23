# Please return the Image object in the "def convert"

def convert
  imgs = Image.pick_from_library(81)

 GRID = grid_size(imgs.length)

  X = imgs[0].width
  Y = imgs[0].height

  ygrid = (imgs.length / GRID).to_i 
  ygrid += 1 if imgs.length % GRID > 0

  Image.render(X*GRID, Y*ygrid) do 
    (0...GRID).each do |y|
      (0...GRID).each do |x|
        img = imgs[y*GRID + x]
        img.draw(x*X, y*Y, X, Y) if img
      end
    end
  end
end

def grid_size(num)
  # Math.sqrt
  array = [1, 4, 9, 16, 25, 36, 49, 64, 81]
  array.each_with_index do |e, i|
    return i + 1 if num <= e
  end

  9
end

