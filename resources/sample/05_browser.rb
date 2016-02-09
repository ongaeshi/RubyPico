# Please return the text or image in the "def main"

def main
  url = Popup.input "Url?"
  command = Popup.input "1 .. open\n2 .. get\n3 .. json"
  
  case command
  when "1"
    Browser.open url
  when "2"
    puts Browser.get url
  when "3"
    puts Browser.json url
  else
    puts Browser.get url
  end
end
