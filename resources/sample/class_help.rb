# # class_help
#
# ## Description
# Display class list or methods

def main
  name = Popup.input("Class name?(e.g. Array)\nCancel: Display class")
  
  if name
    puts Module.const_get(name).info
  else
    puts class_list
  end
end

def class_list
  a = []

  ObjectSpace.each_object(Module) do |o|
    a.push o unless o.to_s.start_with? "#"
  end
 
  a.map { |e| e.to_s }.sort.join("\n")
end

class Module
  def info
    <<EOS
module #{to_s}
#{info_body}
EOS
  end
end

class Class
  def info
    <<EOS
class #{to_s} < #{superclass}
#{info_body}
EOS
  end
end

def info_body
  r = []
  
  e = included_modules - [Kernel]
  r << "  include #{e.join(", ")}" unless e.empty?

  e = methods(false)
  r << methods_str(e, "#{to_s}.") unless e.empty? 

  e = instance_methods(false)
  r << methods_str(e) unless e.empty? 

  r.join("\n\n")
end

def methods_str(a, header = "")
  a.map do |e|
    "  #{header}#{e}"
  end.join("\n")
end

main
