# Please return the text or image in the "def main"

def main
  src = Clipboard.get
  header = Popup.input "Header?"
  puts src.split("\n").map { |e| header + e }.join("\n")
end
