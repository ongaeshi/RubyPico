# # chat/irb
# 
# ## Description
# irb - Interactive Ruby Shell

class Irb
  LIMIT = 1000
  
  def welcome
    help
  end
  
  def call(input)
    return help if input =~ /^help$/

    begin
      r = eval(input)
      r = r.inspect unless r.is_a? String
      
      if r.length > LIMIT
        r[0..LIMIT] + "..."
      else
        r
      end
    rescue Exception => e
      e.message
    end
  end
  
  def help
    <<EOS
irb - Interactive Ruby Shell
EOS
  end
end

if __FILE__ == $0
  class Chat < Irb ; end
end
