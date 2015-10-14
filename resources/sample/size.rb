# Please return the Image object in the "def convert"

def convert
  imgs = Image.pick_from_library(100)
  imgs.map { |e| e.to_s }
end

class Image
  def to_s
    "w:#{width.to_i}, h:#{height.to_i}"
  end
end
