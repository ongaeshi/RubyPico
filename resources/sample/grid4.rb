# Please return the Image object in the "def convert"
X = 2
Y = 2
NUM = X * Y

def convert
  imgs = Image.pick_from_library(4)

  BX = imgs[0].width
  BY = imgs[0].height
  
  POS = [
    [ 0,  0],
    [BX,  0],
    [ 0, BY],
    [BX, BY],
  ]

  Image.render(BX*2, BY*2) do 
    imgs.each_with_index do |img, i| 
      img.draw(POS[i][0], POS[i][1], BX, BY)
    end
  end
end

