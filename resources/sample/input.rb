# # input
#
# ## Description
# Input and output

name = Popup.input "What your name?"
puts "Hello! #{name}."

year = Popup.input "Your birth year?"
age = Time.now.year - year.to_i
puts "You are a #{age} year old."
