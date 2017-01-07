# # click_link
#
# ## Description
# Make clickable links

def a(str)
  AttrString.new(str, link: str)
end

def reload
  puts "Click bellow links\n\n"
  puts a("foo") + ", " + a("bar") + ", " + a("baz") + ", " + a("clear")
  puts "----"
end

# ---
reload

loop do
  url = clicked_link

  next if url.nil?

  case url
  when "clear"
    clear
    reload
  else
    puts url
  end

  puts "Hi!, #{url}" if url == "bar"

  sleep 0.1
end
