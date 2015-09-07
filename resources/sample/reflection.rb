# Please return the Image object in the "def convert"

def convert
  #img = Image.load("sample.jpg")  
  img = Image.pick_from_library

  W = img.width
  H = img.height
  
  Image.render(W, H*1.5) do
    img.draw(0, 0, W, H)
    img.reflection(0.5, 0.0).draw(0, H, W, H*0.5)
  end
end
