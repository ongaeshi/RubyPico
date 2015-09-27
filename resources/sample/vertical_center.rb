# Please return the Image object in the "def convert"

def convert
  #img = Image.load("sample.jpg")  
  imgs = Image.pick_from_library(100)
  
  array = [
    ImageUtil.horizontal(imgs[1..imgs.length/2]),
    imgs[0],
    ImageUtil.horizontal(imgs[imgs.length/2+1..-1]),
  ]
  
  ImageUtil.vertical(array)    
end
