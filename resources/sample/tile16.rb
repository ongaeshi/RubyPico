# Please return the Image object in the "def convert"

def convert
  #img = Image.load("sample.jpg")
  img = Image.pick_from_library

  NUM = 4
  W = img.width / 2
  H = img.height / 2
  
  Image.render(W*NUM, H*NUM) do 
     img.d(0, 0)
     img.bright(64).d(1, 0)
     img.contrast(64).d(2, 0)
     img.gamma(1.5).d(3, 0)
  
     img.emboss(64).d(0, 1)
     img.edge.d(1, 1)
     img.gray.d(2, 1)
     img.sepia.d(3, 1)

     img.invert.d(0, 2)
     img.blur(128).d(1, 2)
     img.sharp(32).d(2, 2)
     img.unsharp(32).d(3, 2)

     img.rotate(30).d(0, 3)
     img.rotate(180).d(1, 3)
     img.opacity(0.5).d(1, 3)
     img.center_crop.d(2, 3)
     img.reflection(1.0, 0.5).d(3, 3)
  end
end


class Image
  def d(ix, iy)
    draw(ix * W, iy * H, W, H)
  end

  def center_crop
    cx = width/2
    cy = height/2
    crop(cx - cx/2, cy - cy/2, cx, cy)
  end
end
