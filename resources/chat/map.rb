# Define "main" function or "Chat" class

class Map
  def initialize
    @from = @to = nil
  end
  
  def welcome
    "From?"
  end
  
  def call(input)
    if @from.nil?
      @from = input
      "To?"
    else
      @to = input
      
      # app = "http://maps.apple.com/"
      app = "comgooglemaps://"
      query = URI.encode_www_form saddr: @from, daddr: @to
      url = "#{app}?#{query}"
      Browser.open url
      
      @from = @to = nil
      url
    end
  end
end

if __FILE__ == $0
  class Chat < Map ; end
end