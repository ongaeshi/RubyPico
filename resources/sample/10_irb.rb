# # 10_irb
#
# ## Description
# Interactive Ruby Shell (REPL).

class Chat
  def welcome
    <<EOS
irb - Interactive Ruby Shell

Try ruby.

"Hi".reverse
1 + 2 * 3
["a", "b", "c"].join("\\n")
{a: 1, b: 2, c: 3}
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
