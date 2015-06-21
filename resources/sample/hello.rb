# Please return the Image object in the "def convert"
# LX = 70
# LY = 60

def convert
  #img = Image.load("sample.jpg")  
  img = Image.pick_from_library
  
  # img = img.crop(
  #   LX, LY,
  #        img.width - LX, img.height - 280
  #    )

  #image = img.crop(10, 10, img.width - 10, img.height -10)  
  #img = img.crop(190, 190, 20, 100)
  
  img
end
