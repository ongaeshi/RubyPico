# Please return the text or image in the "def convert"

def convert
  src = Clipboard.get.split("\n")
  column = src.length.to_s.length
  
  (1..src.length).map do |e|
    sprintf("%#{column}d: %s", e, src[e - 1])
  end.join("\n")
end
