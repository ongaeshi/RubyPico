# Please return the Image object in the "def convert"

def convert
  imgs = Image.pick_from_library(100)
  ImageUtil.horizontal(imgs)
end
