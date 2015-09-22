# Please return the Image object in the "def convert"
X = 2
Y = 2
NUM = X * Y

def convert
  imgs = Image.pick_from_library(4)

  BX = imgs[0].width
  BY = imgs[0].height
  
   Image.render(BX*2, BY*2) do 
     imgs[0].draw(0, 0, BX, BY)
     imgs[1].draw(BX, 0, BX, BY)
     imgs[2].draw(0, BY, BX, BY)
     imgs[3].draw(BX, BY, BX, BY)
  end
  
  #img.save  
end

