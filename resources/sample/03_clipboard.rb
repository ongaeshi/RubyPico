# Please return the text or image in the "def convert"

def convert
  src = Clipboard.get
  header = Popup.input "Header?"
  src.split("\n").map { |e| header + e }.join("\n")
end
