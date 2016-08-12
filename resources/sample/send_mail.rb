# # send_mail
#
# ## Description
# Send a mail

def mailto(to, hash)
  "mailto:#{to}?#{URI.encode_www_form(hash)}"
end

if __FILE__ == $0
  url = mailto("user@example.com",
               subject: Popup.input("Subject?"),
               body: Popup.input("Body?"),
              )
  Browser.open(url)
end
