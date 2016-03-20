# # 10_irb
#
# ## Description
# Interactive Ruby Shell is a REPL.

def chat(input)
  begin
    eval(input)
  rescue Exception => e
    e.message
  end
end
