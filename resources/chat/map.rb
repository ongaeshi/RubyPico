# # chat/map
#
# ## Description
# Search route using app
#
# ## Usage
# # Search by setting the from and to
# % From?
# $ Tokyo
# % To?
# $ Osaka
# --> Launch the app
#
# # Change app to use
# $ app apple  (default)
# $ app google

class Map
  attr_accessor :app_kind

  def initialize
    @from = @to = nil
    @app_kind = :apple
  end
  
  def welcome
    "From?"
  end
  
  def call(input)
    if input =~/^help$/
      return <<EOF
# chat/map

## Description
Search route using app

## Usage
# Search by setting the from and to
% From?
$ Tokyo
% To?
$ Osaka
--> Launch the app

# Change app to use
$ app apple  (default)
$ app google
EOF
    end

    if input =~/^app (.+)/
      @app_kind = $1.to_sym
      return app_kind
    end
    
    if @from.nil?
      @from = input
      "To?"
    else
      @to = input

      query = URI.encode_www_form saddr: @from, daddr: @to
      url = "#{app_url}?#{query}"
      Browser.open url
      
      @from = @to = nil
      url
    end
  end
  
  def app_url
    case app_kind
    when :google
       "comgooglemaps://"
    else
      "http://maps.apple.com/"
    end
  end
end

if __FILE__ == $0
  class Chat < Map ; end
end
