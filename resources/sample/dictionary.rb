# # dictionary
#
# ## Description
# Consult a dictionary

def dictionary(word)
  word = URI.encode_www_form_component(word)
  
  <<EOS
Longman
http://www.ldoceonline.com/search/?q=#{word}

Oxford
http://www.oxforddictionaries.com/definition/english/#{word}

Dictionary.com
http://dictionary.reference.com/browse/#{word}

OneLook
http://www.onelook.com/?w=#{word}

Wikipedia(en)
#{wikipedia(word)}

Google Translate
http://translate.google.com/?hl=en#en/ja/#{word}
EOS
end

def wikipedia(word, country = 'en')
  "http://#{country}.wikipedia.org/wiki/#{word}"
end

word = Popup.input("Word?")
puts dictionary(word)
