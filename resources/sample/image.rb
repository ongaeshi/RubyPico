# # image
#
# ## Description
# Display image and overray with logo

puts "image"
image = Image.pick_from_library
# image = Image.load("sample.jpg")
puts image

puts "logo"
URL = "http://rubypico.ongaeshi.me/images/rubypico_icon.png"
logo = Image.load(URL)
puts logo

puts "overray"
overrayed_image = Image.render(image.width, image.height) do
  image.draw(0, 0, image.width, image.height)
  logo.gray.opacity(0.5).draw(0, 0, logo.width, logo.height)
end
puts overrayed_image
