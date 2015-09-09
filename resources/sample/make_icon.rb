# Please return the Image object in the "def convert"

def convert
  # img = Image.load("sample.jpg")
  img = Image.pick_from_library

  # Icon-60@2x (iOS7,8)
  img = img.resize_force(120, 120)
  img.save
  
  # Icon-60@3x (iOS7,8)
  img = img.resize_force(180, 180)
  img.save

  img
end
