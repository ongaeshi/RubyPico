# # map
#
# ## Description
# Search a route using map app

APP = "http://maps.apple.com/"
# APP = "comgooglemaps://"

query = URI.encode_www_form saddr:Popup.input("Starting Point?"), daddr: Popup.input("Destination?")
Browser.open "#{APP}?#{query}"
