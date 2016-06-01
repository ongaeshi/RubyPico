---
layout: layout
title: 20分ではじめるRubyPico
lang: ja
---
# 20分ではじめるRubyPico

[20分ではじめるRubyPico](https://www.ruby-lang.org/ja/documentation/quickstart)

- CRubyのものですが、sample/irbを使えばRubyPicoでも実行可能です
- 少しコードの書き方が違うので以下を参考にしてください
  - irbでローカル変数が使えない制限があるため、代わりに`@a = 3 ** 2`のように書きます
  - putsの出力がirb内で表示されないので使わないようにしています

## 1

```ruby
>>> "Hello World"
=> "Hello World"
```

```ruby
>>> @a = 3 ** 2
=> 9
>>> @b = 4 ** 2
=> 16
>>> Math.sqrt(@a+@b)
=> 5.0
```

## 2

```ruby
def hi
  "Hello World!"
end
```

```ruby
def hi(name)
  "Hello #{name}!"
end
```

```ruby
def hi(name = "World")
  "Hello #{name.capitalize}!"
end
```

```ruby
class Greeter
  def initialize(name = "World")
    @name = name
  end
  def say_hi
    "Hi #{@name}!"
  end
  def say_bye
    "Bye #{@name}, come back soon."
  end
end
```

## 3

このファイルを“ri20min.rb”という名前で保存して実行してください。

```ruby
class MegaGreeter
  attr_accessor :names

  # Create the object
  def initialize(names = "World")
    @names = names
  end

  # Say hi to everybody
  def say_hi
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("each")
      # @names is a list of some kind, iterate!
      @names.each do |name|
        puts "Hello #{name}!"
      end
    else
      puts "Hello #{@names}!"
    end
  end

  # Say bye to everybody
  def say_bye
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("join")
      # Join the list elements with commas
      puts "Goodbye #{@names.join(", ")}.  Come back soon!"
    else
      puts "Goodbye #{@names}.  Come back soon!"
    end
  end
end


if __FILE__ == $0
def main
  mg = MegaGreeter.new
  mg.say_hi
  mg.say_bye

  # Change name to be "Zeke"
  mg.names = "Zeke"
  mg.say_hi
  mg.say_bye

  # Change the name to an array of names
  mg.names = ["Albert", "Brenda", "Charles",
              "Dave", "Engelbert"]
  mg.say_hi
  mg.say_bye

  # Change to nil
  mg.names = nil
  mg.say_hi
  mg.say_bye
end
end
```

## 4

