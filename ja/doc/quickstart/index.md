---
layout: layout
title: 20分ではじめるRuby
lang: ja
---
# 20分ではじめるRuby

はじめにRubyの基本的な書き方を20分で学べるチュートリアルをやってみましょう。

[20分ではじめるRuby](https://www.ruby-lang.org/ja/documentation/quickstart/)

上のページはRubyPicoのお父さんにあたるPC版のRuby(CRubyと言われたりします)で実際に使われているチュートリアルです。RubyPicoでも同じようにプログラムを動かすことができます。つまりこのチュートリアルをRubyPicoを使って完了させれば本物のRubyだって書けるようになるはずです！(いいすぎ？)

## マニュアルの読み方
1. RubyPicoを[ダウンロード](../../download.html)して起動
2. このページをブラウザで開く(すでに開いているはず)
3. ブラウザ(長押しして新規タブで開くがおすすめ)を使って[20分ではじめるRuby](https://www.ruby-lang.org/ja/documentation/quickstart/)を開く

あとはホームボタンをダブルクリックしてアプリとブラウザを切り替えながら進めていきましょう。プログラムの入力が大変なときはコピーアンドペーストを使うとよいです。

マニュアルとアプリを同時に見ながら進めたい人はもう一台スマホやタブレットを用意(家族や学校や図書館などの公共施設から借りたり)してそちらのブラウザで開きましょう。もしくはプリントアウトがおすすめです。

## 目次
- [1ページ目](#section-2)
- [2ページ目](#section-3)
- [3ページ目](#section-6)
- [4ページ目](#section-8)

## 1
[1ページ目](https://www.ruby-lang.org/ja/documentation/quickstart/)を進めるための補足です。

### インタラクティブRubyの起動方法
1. ファイル選択画面で"Sample"タブをタップ
2. `irb.rb`を開く
3. 右上の"Run"ボタンをタップ

### irbで変数を使うときは@を付ける
irb上で変数に値を保存するには先頭に`@`を付ける必要があります。`a = 1`だったら`@a = 1`、`b = 1 + 2`だったら`@b = 1 + 2`にしてください。

この違いはirbだけのもので通常のプログラムのときはCRubyと同じように書くことができます。

```ruby
irb(main):007:0> @a = 3 ** 2
=> 9
irb(main):008:0> @b = 4 ** 2
=> 16
irb(main):009:0> Math.sqrt(@a+@b)
=> 5.0
```

## 2
[2ページ目](https://www.ruby-lang.org/ja/documentation/quickstart/2/)を進めるための補足です。

### 複数行にまたがるプログラムが入力できない
代わりにセミコロン(`;`)でつないで複数行入力してください。

```ruby
irb(main):010:0> def hi; puts "Hello World!"; end
=> :hi
```

完結していないプログラムを入力しようとするとエラーになってしまいます。

```ruby
irb(main):010:0> def hi
line 1: syntax error, unexpected $end, expecting ';' or '\n'
```

### 簡潔で繰り返せるメソッド
`hi`の再定義もセミコロンでつないでください。

```ruby
irb(main):015:0> def hi(name); puts "Hello #{name}!"; end
=> :hi
```

### Stringに穴を開ける
おなじく1行にまとめて入力します。

```ruby
irb(main):019:0> def hi(name = "World"); puts "Hello #{name.capitalize}!"; end
=> :hi
```

### 挨拶人(Greeter)への進化

長くなってきたのでこれはファイルに作成してからロードするという作戦でいきます。

1. "Back"ボタンを押してirbを終了します
2. 続けて"Back"ボタンを2回押して"Sample"画面に戻ります
3. 下の"File"タブを押してファイル選択画面に移動します
4. 右上の"+"ボタンを押します
5. 作成するファイル名を聞かれるので`greeter`と入力して"OK"を押します
6. `greeter.rb`の編集画面に移動するので以下のプログラムを入力します

```ruby
class Greeter
  def initialize(name = "World")
    @name = name
  end
  def say_hi
    puts "Hi #{@name}!"
  end
  def say_bye
    puts "Bye #{@name}, come back soon."
  end
end
```

もう一度irbを起動して、さきほど作成した`greeter.rb`を読み込みます。

```ruby
irb(main):024:0> load "./greeter.rb"
=> :say_bye
```

## 3
[3ページ目](https://www.ruby-lang.org/ja/documentation/quickstart/3/)を進めるための補足です。

変数に格納するときは先頭に`@`を付けます。

```ruby
irb(main):035:0> @greeter = Greeter.new("Pat")
=> #<Greeter:0x16cac @name="Pat">
irb(main):036:0> @greeter.say_hi
Hi Pat!
=> nil
irb(main):037:0> @greeter.say_bye
Bye Pat, come back soon.
=> nil
```

```ruby
irb(main):038:0> @greeter.@name
SyntaxError: (irb):38: syntax error, unexpected tIVAR, expecting '('
```

### Objectの殻の中

```ruby
irb(main):041:0> @greeter.respond_to?("name")
=> false
irb(main):042:0> @greeter.respond_to?("say_hi")
=> true
irb(main):043:0> @greeter.respond_to?("to_s")
=> true
```

### クラスの変更 - まだ間に合います

セミコロンで1行につなげて入力します。

```ruby
irb:010> class Greeter; attr_accessor :name; end
=> nil
```

変数に格納するときは先頭に`@`を付けます。

```ruby
irb(main):047:0> @greeter = Greeter.new("Andy")
=> #<Greeter:0x3c9b0 @name="Andy">
irb(main):048:0> @greeter.respond_to?("name")
=> true
irb(main):049:0> @greeter.respond_to?("name=")
=> true
irb(main):050:0> @greeter.say_hi
Hi Andy!
=> nil
irb(main):051:0> @greeter.name="Betty"
=> "Betty"
irb(main):052:0> @greeter
=> #<Greeter:0x3c9b0 @name="Betty">
irb(main):053:0> @greeter.name
=> "Betty"
irb(main):054:0> @greeter.say_hi
Hi Betty!
=> nil
```

### 何にでも挨拶してくれる、MegaGreeterは無視しない！

ファイルを作成してそのまま実行します(irbを経由しません)。

- `greeter.rb`を作ったときと同じように`ri20min.rb`を作成します
- `MegaGreeter`のプログラムを入力またはコピーアンドペーストで貼り付けます
- エディタ画面右上の"Run"ボタンを押すと書いたスクリプトをそのまま実行してくれます
- 先頭の`#!/usr/bin/env ruby`はCRuby用のものなのでRubyPicoでは不要です(あってもただのコメントとして処理されます)

## 4
[4ページ目](https://www.ruby-lang.org/ja/documentation/quickstart/4/)を進めるための補足です。

特にありません。

