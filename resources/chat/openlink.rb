# # chat/openlink
# 
# ## Description
# Open URL
# 
# ## Usage
# $ https://itunes.apple.com/en/app/rubypico/id1042498865

class Openlink
  def call(input)
    return help if input =~ /^help$/

    Browser.open input
  end

  def help
    <<EOS
# chat/openlink

## Description
Open URL

## Usage
$ https://itunes.apple.com/en/app/rubypico/id1042498865
EOS
  end
end
