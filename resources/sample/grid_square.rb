# Please return the Image object in the "def convert"

def convert
  imgs = Image.pick_from_library(81)
  ImageUtil.grid(imgs.map { |e| e.square })
end
