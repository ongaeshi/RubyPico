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
overrayed_image = Image.render(image.w, image.h) do
  image.draw(0, 0, image.w, image.h)

  w = image.w / 8
  h = logo.fith(w)

  img = logo.sepia
  img.draw(image.w - w,
           image.h - h,
           w,
           h)
end
puts overrayed_image
