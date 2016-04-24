# # irb
#
# ## Description
# Interactive Ruby Shell (REPL).

class Chat
  def welcome
    <<EOS
irb - Interactive Ruby Shell
EOS
  end

  def call(input)
    begin
      eval(input)
    rescue Exception => e
      e.message
    end
  end
end
