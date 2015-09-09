# Please return the Image object in the "def convert"

def convert
  #img = Image.load("sample.jpg")  
  img = Image.pick_from_library

  W = img.width
  H = img.height

  img = img.sepia.opacity(0.5)

  Image.render(W, H) do
    (1..3).each do |rot|
      img.rotate(rot*20).draw(0, 0, W, H)
    end
  end
end
