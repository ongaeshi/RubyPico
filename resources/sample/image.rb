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

  w = image.width / 8
  h = logo.fith(w)

  img = logo.sepia
  img.draw(image.width - w,
           image.height - h,
           w,
           h)
end
puts overrayed_image
