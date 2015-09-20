# Please return the Image object in the "def convert"
BRIGHT = -40
CONTRAST = 64
BORDER_RATE = 0.5

def convert
  #img = Image.load("sample.jpg")  
  img = Image.pick_from_library

  border = BORDER_RATE  * img.width

  lhs = img.crop(0, 0, border, img.height)
  rhs = img.crop(border, 0, img.width - border, img.height)

  lhs = lhs.gray.bright(BRIGHT).contrast(CONTRAST)

  Image.render(img.width, img.height) do
    lhs.draw(0, 0, lhs.width, lhs.height)
    rhs.draw(border, 0, rhs.width, rhs.height)
  end
end
