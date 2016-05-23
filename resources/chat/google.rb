# # chat/google
# 
# ## Description
# Search page
# 
# ## Usage
# Search by keyword
# $ keyword1 keyword2 ...

class Google
  def initialize
  end
  
  def welcome
    "Keyword?"
  end
  
  def call(input)
    return help if input =~ /^help$/

    url = "https://www.google.com/search?" + URI.encode_www_form(q: input)
    Browser.open url
  end

  def help
    <<EOS
# chat/map

## Description
Search page

## Usage
Search by keyword
$ keyword1 keyword2 ...
EOS
  end
end

if __FILE__ == $0
  class Chat < Google ; end
end
