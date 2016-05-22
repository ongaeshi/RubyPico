# Define "main" function or "Chat" class
LIMIT = 1000

class Irb
  def welcome
    <<EOS
irb - Interactive Ruby Shell
EOS
  end

  def call(input)
    begin
      r = eval(input)
      r = r.inspect unless r.is_a? String
      
      if r.length > LIMIT
        r[0..LIMIT] + "..."
      else
        r
      end
    rescue Exception => e
      e.message
    end
  end
end

class Object
  def m(keyword)
    self.class.instance_methods().find_all { |e| e .to_s.include?(keyword) }.join("\n")
  end
end

if __FILE__ == $0
  class Chat < Irb ; end
end