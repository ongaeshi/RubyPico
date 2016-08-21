# # irb
#
# ## Description
# Interactive Ruby Shell (REPL).

puts "irb - Interactive Ruby Shell"

loop do
  print "% "
  cmd = gets
  
  puts cmd
  
  begin
    p eval(cmd)
  rescue Exception => e
    puts e.message
  end
end
