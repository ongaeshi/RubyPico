# # irb
#
# ## Description
# Interactive Ruby Shell (REPL).

puts "irb - Interactive Ruby Shell"
no = 0

loop do
  print "irb:%03d> " % no
  cmd = gets
  
  puts cmd
  
  begin
    puts "=> #{eval(cmd).inspect}"
  rescue Exception => e
    puts e.message
  end
  
  no += 1
end
