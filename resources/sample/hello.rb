def setup
  set_background 255, 255, 255
  @x = 180
  @y = 0
end

def update
  @y += 1
end

def draw
  set_color 50, 200, 50
  circle 160, 200, 100

  set_color 200, 50, 50
  @x = Input.touch(0).x if Input.touch(0).valid?
  rect @x, @y, 100, 80

  set_color 0, 0, 0
  text "Hello world!", 120, 160
end

