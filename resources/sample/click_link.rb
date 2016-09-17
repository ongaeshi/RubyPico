# # click_link
#
# ## Description
# Make clickable links

def a(str)
  AttrString.new(str, link: str)
end

TextView.click_link do |url|
  puts url
end

TextView.click_link do |url|
  puts "Hi!, #{url}" if url == "bar"
end

# puts "[foo](foo), [bar](bar), [baz](baz)"
puts a("foo") + ", " + a("bar") + ", " + a("baz")
puts "----"
