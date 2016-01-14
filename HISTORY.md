# HISTORY - PictRuby

## 0.3 - 2015-01-15

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
