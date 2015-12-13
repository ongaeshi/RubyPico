# Please return the text or image in the "def convert"

def convert
  url = Popup.input "Url?"
  command = Popup.input "1 .. open\n2 .. get\n3 .. json"
  
  case command
  when "1"
    Browser.open url
  when "2"
    Browser.get url
  when "3"
    Browser.json url
  else
    Browser.get url
  end
end
