# Define "main" function or "Chat" class

class Wiki
  attr_accessor :lang
  
  def initialize
    @lang = "en"
  end
  
  def welcome
    "Wikipedia page name?"
  end
  
  def call(input)
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
end

if __FILE__ == $0
  class Chat < Wiki ; end
end