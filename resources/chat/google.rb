# Define "main" function or "Chat" class

class Google
  def initialize
  end
  
  def welcome
    "Keyword?"
  end
  
  def call(input)
    url = "http://www.google.com/search?q=#{URI.encode_www_form_component(input)}"
    Browser.open url
  end
end

if __FILE__ == $0
  class Chat < Google ; end
end