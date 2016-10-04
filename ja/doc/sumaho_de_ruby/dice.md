---
layout: layout
title: 多面サイコロ
lang: ja
---
# 多面サイコロ

[[戻る]](./index.html)

## 概要
多面ダイスです。6面ダイスから100面ダイスまで好きな範囲で出目を調整することができます。すごろくやカードゲームのお供にどうぞ。

![dice](/images/dice.gif)

## 使われている関数
- `Kernel.rand(num)`
  - 0 <= i < num-1 までの整数を返します
  - 引数無しの場合は 0 <= f < 1.0 までの小数を返します
- `AttrString`
  - 装飾文字列を作成することができます
  - `AttrString.new("foo", link: "http://example.com")`でfooをクリックすると http://example.com にジャンプするリンク付き文字列になります
- `TextView.click_link`
  - リンク付き文字列がクリックされたときに呼ばれるブロックを設定することができます
  - `url`にはクリックされた文字列のURLが渡されます
- `TextView.clear`
  - 画面内のテキストを全てクリアします

## テクニック
リンク付き文字列のURLを非URL(例: `dummy`)にして`TextView.click_link`内のcase分で分岐することでカスタムボタンのように振るまわせることができます。
  
## ソースコード
```ruby
$max = 6

def dice(max = 6)
  rand(max) + 1
end

def draw
  print "Dice #{$max}    ",
    AttrString.new("[抽選！]", link: "lottery"),
    ", ",
    AttrString.new("[クリア]", link: "clear"),
    ", ",
    AttrString.new("[-]", link: "minus"),
    ", ",
    AttrString.new("[+]", link: "plus"),
    "\n"
end

TextView.click_link do |url|
  case url
  when "lottery"
    puts dice($max)
  when "clear"
    TextView.clear
    draw
  when "plus"
    $max += 1
    TextView.clear
    draw
  when "minus"
    $max -= 1
    TextView.clear
    draw
  end
end

draw
```
