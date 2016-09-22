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

TextView.click_link do |url|
  case url
  when "clear"
    TextView.clear
    reload
  else
    puts url
  end
end

TextView.click_link do |url|
  puts "Hi!, #{url}" if url == "bar"
end

reload
