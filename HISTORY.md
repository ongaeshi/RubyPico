# HISTORY - RubyPico

### 0.9.4 - 2017-01-11

- Fix bug

### 0.9.3 - 2017-01-08

- Add library
  - Dir.home, Dir.documents
  - Browser.get(url, header: xxx)
    - Enable header param
  - Image.load loads local file
  - Image.save_to(path)
  - Base64.encode, decode
- Fix sample/click_link

### 0.9.2 - 2016-11-24

- Add app tab
  - Register your application
  - Add sample/irb
  - Add sample/lineno
- Add Copy button
- Add library
  - Browser.post
  - Kernel#clicked_link
  - Kernel#choise

### 0.9.1 - 2016-11-03

- Improve File Manager
  - Add Edit button
  - Show/Create directory
  - Delete
  - Move
  - Rename
  - Sort Order
- Add library
  - File
  - Dir
  - Kernel#prompt
  - Kernel#sleep
  - Kernel#clearprint
  - Method
- Change icon
- Enable URL of "rubypico://dir/path"

### 0.9 - 2016-09-22

- gets
  - Function to input from keyboard
- AttrString
  - Create link string
- TextView.clear
  - Clear text field
- TextView.click_link
  - Callback a clicked link
- Add sample code
  - irb.rb
    - Use gets
  - click_link.rb
    - Use AttrString, TextView.click_link, TextView.clear
- Use monospace font
    
### 0.8 - 2016-08-12

- main is unnecessary
  - As write more like Ruby
- Image can be `puts`
  - See sample/image.rb
- Update mruby 1.2.0
- Update Podfile in order to conform to CocoaPods 1.0 syntax

### 0.7.1 - 2016-06-07

- Fix scroll bug of termination
- Add "rubypico://a_script" to URL Scheme
- Add chat/tenki

### 0.7 - 2016-05-27

- require
- $:(LOAD_PATH), $0(PROGRAM_NAME)
- Add sample/chat
- Fix scroll bug of editor

### 0.6 - 2016-04-30

- Support Regexp
- Add Chat#timer event
- Fix bug a chat font is blinking
- Add sample/hatena_bookmark_bot
- Remove sample number prefix

### 0.5 - 2016-03-24

- Script
  - Create chat bot
    - Define Chat class
  - Add mruby-eval
  - Add sample/10_irb.rb
- etc
  - Enable "Application supports iTunes file sharing
  - New Icon, LaunchImage
  - Automate the icon update

### 0.4 - 2016-02-14

- Script
  - Enable p, puts
  - You must call with 'puts' when script returns text

```ruby
# Before 0.3
def main
  "Hello, PictRuby"
end
```

```ruby
# After 0.4
def main
  puts "Hello, PictRuby"
end
```

- Editor
  - Change the script name

## 0.3 - 2016-01-15

- Script
  - Use MRuby.framework
    - mruby-sprintf
    - mruby-print
    - mruby-math
    - mruby-time
    - mruby-struct
    - mruby-enum-ext
    - mruby-string-ext
    - mruby-numeric-ext
    - mruby-array-ext
    - mruby-hash-ext
    - mruby-range-ext
    - mruby-proc-ext
    - mruby-symbol-ext
    - mruby-random
    - mruby-object-ext
    - mruby-objectspace
    - mruby-fiber
    - mruby-enumerator
    - mruby-enum-lazy
    - mruby-toplevel-ext
    - mruby-kernel-ext
    - mattn/mruby-json
    - mruby-string-utf8
  - Change entrypoint name from 'convert' to 'main'
- Editor
  - Use monospaced font
  - Don't update timestamp if there is no change in the file contents
  - Improve help text
- Etc
  - Support URL Scheme
    - pictruby://a_script

## 0.2 - 2015-12-13

New function

- Browser
  - Browser.get(url)
  - Browser.json(url)
  - Browser.open(url)
  - Browser.open?(url)
- Popup
  - Popup.input(msg)
  - Popup.msg(msg)
- URI
  - URI.encode_www_form(enum)
  - URI.encode_www_form_component(str)

New sample

- 00_hello.rb
- 01_input.rb
- 02_pictruby.rb
- 03_clipboard.rb
- 04_send_mail.rb
- 05_browser.rb
- 06_map.rb
- 07_dictionary.rb
- 08_lineno.rb


## 0.1 - 2015-11-07

- 1st Release
