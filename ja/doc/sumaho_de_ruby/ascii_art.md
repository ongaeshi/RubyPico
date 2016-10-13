---
layout: layout
title: アスキーアートアニメーション - スマホではじめるRubyプログラミング
lang: ja
---
# アスキーアートアニメーション

[[戻る]](./index.html)

## 概要

![ascii_art](/images/ascii_art.gif)

## 使われている関数
- `sleep`
  - 指定時間停止します
- `clearprint`
  - `TextView.clear`と`print`を同時に実行します
  - 個別に実行するよりも画面のちらつきを抑えることができます

## テクニック
`sleep`と`clearprint`を組み合わせるとアスキーアートアニメーションを作ることができます。
  
## ソースコード
```ruby
a = <<'EOS'
        (^_^)

        (^o^)

        (^_^)

        (^o^)

        (^_^)

        (-_-)

        (-_-)
          |

        (-_-)
          |
          |

        (-_-)
          |
          |
          |

        (-_-)
          |
          |
          |
         / \

        (-_-)
          |
         /|
          |
         / \

        (-_-)
          |
         /|\
          |
         / \

        (^o^)
     \    |    /
     -  \ | /  -
     /    |    \
         / \

        (^o^)
          |    
        \ | /  
          |    
         / \

EOS

def parse_aa(src)
  array = []
  str = ""

  src.each_line do |line| 
    if line =~ /^$/
      array << str
      str = ""
    else
      str += line
    end
  end

  unless str.empty?
    array << str
  end
  
  array
end

a = parse_aa(a)
c = 0

loop do
  sleep_time = 0.8
  idx = c % a.length
  str = a[idx]
  
  if idx == a.length - 1
    str += "\n"
    str += Time.now.to_s
    sleep_time *= 5
  end
  
  clearprint str
  c += 1
  sleep sleep_time
end
```
