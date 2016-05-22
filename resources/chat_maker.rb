# Define "main" function or "Chat" class

class ChatMaker
  def initialize
    @objs = {}
    @alias = {}
  end
  
  def add(sym, klass)
    @objs[sym] = klass.new
  end
  
  def alias(new_name, old_name)
    @alias[new_name] = old_name
  end
  
  def [](sym)
    @objs[sym]
  end
  
  def welcome
    <<EOF
.NAME
Change current bot

.NAME ARG1 ARG2
Change bot and call a command

.NAME
ARG1 ARG2 (COM1)
ARG1 (COM2)

Change bot and call many commands

.help
Display all bots
EOF
  end
  
  def call(input)
    begin
      call_main(input)
    rescue Exception => e
      e.message
    end
  end  
  
  def call_main(input)
    inputs = input.split("\n")
    
    if inputs.length > 1
      process_oneline(inputs[0])
      
      if @obj
        inputs[1..-2].each do |e|
          @obj.call(e)
        end
        
        return @obj.call(inputs[-1])
      end
    else
      ret = process_oneline(inputs[0])
      return ret if ret    
    end
    
    return @obj.call(input) if @obj
    
    "?"
  end
  
  def timer
    @obj.timer if @obj && @obj.class.method_defined?(:timer)
  end
  
  private
  
  def process_oneline(input)
    if input =~ /^\.(.+)/
      commands = $1.split(" ")
      
      command = commands[0]
      command = @alias[command.to_sym] if @alias.key? command.to_sym
      
      if command == "help"
        help = {}
        
        @objs.keys.each do |e|
          help[e] = e.to_s
        end
        
        @alias.each do |k, v|
          help[v] += "(#{k.to_s})" if  help.key?(v)
        end
        
        return help.values.join("\n")
      end
      
      obj = @objs[command.to_sym]
      
      if obj
        @obj = obj
        
        if commands.length > 1
          return @obj.call(commands[1..-1].join(" ")) if @obj
        else
          return command
        end
      else
        return "?"
      end
      
      return nil
    end
  end
end
