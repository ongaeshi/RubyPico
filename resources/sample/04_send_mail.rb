# Please return the text or image in the "def convert"

def convert
  url = mailto("user@example.com",
               subject: Popup.input("Subject?"),
               body: Popup.input("Body?"),
              )
  Browser.open(url)
end

def mailto(to, hash)
  "mailto:#{to}?#{URI.encode_www_form(hash)}"
end
