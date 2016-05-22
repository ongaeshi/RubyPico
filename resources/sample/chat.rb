# Define "main" function or "Chat" class

require 'chat_maker'

require 'chat/google'
require 'chat/irb'
require 'chat/map'
require 'chat/openlink'
require 'chat/wiki'

class ChatSample
  def initialize
    @chat = ChatMaker.new
    
    @chat.add :google, Google
    @chat.add :wiki, Wiki
    # @chat[:wiki].lang = "ja"
    @chat.add :map, Map
    @chat.add :irb, Irb
    @chat.add :open, Openlink

    @chat.alias :g, :google
    @chat.alias :m, :map
    @chat.alias :r, :irb
    @chat.alias :w, :wiki
  end
  
  def welcome
    @chat.welcome
  end
  
  def call(input)
    @chat.call input
  end
  
  def timer
    @chat.timer
  end
end

if __FILE__ == $0
  class Chat < ChatSample ; end
end
