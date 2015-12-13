# Please return the text or image in the "def convert"

APP = "http://maps.apple.com/" # "comgooglemaps://"

def convert
  query = URI.encode_www_form saddr:Popup.input("Starting Point?"), daddr: Popup.input("Destination?")
  Browser.open "#{APP}?#{query}"
end
