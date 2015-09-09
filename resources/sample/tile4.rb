# Please return the Image object in the "def convert"

def convert
  # img = Image.load("sample.jpg")
  img = Image.pick_from_library

  W = img.width
  H = img.height
  
  Image.render(W*2, H*2) do 
     img.draw(0, 0, W, H)
     img.gray.draw(W, 0, W, H)
     img.sepia.draw(0, H, W, H)
     img.invert.draw(W, H, W, H)
  end
end
