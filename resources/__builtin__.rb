class Image
  alias_method :w, :width
  alias_method :h, :height

  def square(x_offset = 0, y_offset = 0)
    l = width > height ? height : width
    cx = width / 2
    cy = height / 2
    crop(cx - l/2 + x_offset, cy - l/2 + y_offset, l, l)
  end

  def aspect_ratio
    width.to_f / height
  end

  def fitw(height)
    aspect_ratio * height
  end

  def fith(width)
    (1.0 / aspect_ratio) * width
  end
end

module URI
  def self.encode_www_form(enum)
    enum.map do |k,v|
      if v.nil?
        encode_www_form_component(k)
      elsif v.respond_to?(:to_ary)
        v.to_ary.map do |w|
          str = encode_www_form_component(k)
          unless w.nil?
            str += '='
            str += encode_www_form_component(w)
          end
        end.join('&')
      else
        str = encode_www_form_component(k.to_s)
        str += '='
        str += encode_www_form_component(v)
      end
    end.join('&')
  end
end

module Browser
  def self.json(url)
    JSON::parse(get(url))
  end
end

module Kernel
  ##
  # Invoke method +print+ on STDOUT and passing +*args+
  # Customize for Image
  #
  # ISO 15.3.1.2.10
  def print(*args)
    i = 0
    len = args.size
    while i < len
      if args[i].is_a?(Image) || args[i].is_a?(AttrString)
        __printstr__ args[i]
      else
        __printstr__ args[i].to_s
      end
      i += 1
    end
  end

  ##
  # Invoke method +puts+ on STDOUT and passing +*args*+
  # Customize for Image
  #
  # ISO 15.3.1.2.11
  def puts(*args)
    i = 0
    len = args.size
    while i < len
      if args[i].is_a?(Image) || args[i].is_a?(AttrString)
        __printstr__ args[i] 
        __printstr__ "\n"
      else
        s = args[i].to_s
        __printstr__ s
        __printstr__ "\n" if (s[-1] != "\n")
      end
      i += 1
    end
    __printstr__ "\n" if len == 0
    nil
  end
end

class TextView
  def self.call(url)
    instance.call_in(url)
  end

  def self.click_link(&block)
    instance.click_link_in(&block)
  end
  
  def self.instance
    @singleton ||= TextView.new
  end

  #---

  def initialize
    @blocks = []
  end

  def click_link_in(&block)
    @blocks << block
  end

  def call_in(url)
    @blocks.each do |e|
      e.call(url)
    end
  end
end
