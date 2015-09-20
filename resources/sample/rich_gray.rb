# Please return the Image object in the "def convert"
BRIGHT = -40
CONTRAST = 64

def convert
  #img = Image.load("sample.jpg")  
  img = Image.pick_from_library

  img.gray.bright(BRIGHT).contrast(CONTRAST)
end
