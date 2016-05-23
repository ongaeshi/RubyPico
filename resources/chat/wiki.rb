# # chat/wiki
# 
# ## Description
# Search wikipedia page
# 
# ## Usage
# Search by page name
# $ name
#
# Change page language
# $ lang en (default)
# $ lang ja
# $ lang ..

class Wiki
  attr_accessor :lang
  
  def initialize
    @lang = "en"
  end
  
  def welcome
    "Wikipedia page name?"
  end
  
  def call(input)
    return help if input =~ /^help$/

    if input =~/^lang (.+)/
      @lang = $1
      return lang
    end
    
    url = wikipedia input
    Browser.open url
  end
  
  def wikipedia(text)
    "http://#{lang}.wikipedia.org/wiki/#{URI.encode_www_form_component(text)}"
  end

  def help
    <<EOS
# chat/wiki

## Description
Search wikipedia page

## Usage
Search by page name
$ name

Change page language
$ lang en (default)
$ lang ja
$ lang ..
EOS
  end
end

if __FILE__ == $0
  class Chat < Wiki ; end
end
