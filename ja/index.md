---
layout: layout
title: Ruby Programming Environment in iOS
lang: ja
---
# RubyPico

![rubypico_icon](/images/rubypico_icon.png)

小さな端末でも楽しくプログラミングできるRuby開発環境です。ファイルビューワ、エディタ、実行環境を含みます。

<a href="https://geo.itunes.apple.com/us/app/rubypico/id1042498865?mt=8" style="display:inline-block;overflow:hidden;background:url(http://linkmaker.itunes.apple.com/images/badges/en-us/badge_appstore-lrg.svg) no-repeat;width:165px;height:40px;"></a>

- アプリケーションの起動
- タスクの自動化
- Web API
- 数値計算
- 画像フィルタ

```ruby
APP = "http://maps.apple.com/"
# APP = "comgooglemaps://"

start = Popup.input("開始位置を入力")
dest = Popup.input("目的地を入力")

query = URI.encode_www_form(
    saddr: start,
    daddr: dest
    )

Browser.open "#{APP}?#{query}"
```

さっそく[ダウンロード](./download.html)してみましょう！または[ドキュメント](./doc)をどうぞ。

