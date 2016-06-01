---
layout: layout
title: チャットボットを作る
lang: ja
---
# チャットボットを作る

## 概要

## 最小限のチャットボット

```ruby
require 'chat_maker'

class ChatSample
  def initialize
    @chat = ChatMaker.new
  end
  
  def welcome
    @chat.welcome
  end
  
  def call(input)
    @chat.call input
  end
  
  def timer
    @chat.timer
  end
end

if __FILE__ == $0
  class Chat < ChatSample ; end
end
```

## Google検索

```diff
require 'chat_maker'

class ChatSample
  def initialize
    @chat = ChatMaker.new
+    @chat.add :google, Google
  end
  
  def welcome
    @chat.welcome
  end
  
  def call(input)
    @chat.call input
  end
  
  def timer
    @chat.timer
  end
end

if __FILE__ == $0
  class Chat < ChatSample ; end
end
```

```
>>> .google hello
```

## Wikipedia検索

## カスタマイズ

## エイリアス

## 独自コマンドの作成

## 完成

- [sample/chat.rb](https://github.com/ongaeshi/RubyPico/blob/master/resources/sample/chat.rb)
- [chat/*.rb](https://github.com/ongaeshi/RubyPico/tree/master/resources/chat)
