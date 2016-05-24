# # hit_and_blow
#
# ## Description
# Hit & Blow Game.
# Please enter 4-digit number.

class HitAndBlow
  def initialize
  end
  
  def welcome
    "Please start or help"
  end

  def call(input)
    return help if input =~ /^help$/

    if input =~ /^start/
      @game = Game.new
      return <<EOS
Hit & Blow 🔫
Please enter 4-digit number.
EOS
    end
    
    if @game.nil?
      return "Please start or help"
    end
    
    # game main
  end
  
  def help
    <<EOS
# hit_and_blow

## Description
Hit & Blow Game.
Please enter 4-digit number.
EOS
  end

  class Game
    attr_reader :stage
    attr_reader :history
    attr_reader :correct_answer
    
    def initialize
      @correct_answer = generate_number
      @stage = 1
      @history = []
    end

    def check(answer_str)
      # Convert answer
      answer = answer_str.split("")[0..3].map { |i| i.to_i }

      # Calculate hit & blow
      hit = 0
      (0..3).each { |i| hit += 1 if answer[i] == @correct_answer[i] }

      blow = answer.reduce(0) { |t, e| @correct_answer.include?(e) ? t + 1 : t } - hit

      # Record history
      @history.push "#{@stage}: #{answer_str} [hit:#{hit} blow:#{blow}]"
      @stage += 1

      # Return value
      [hit, blow]
    end

    def generate_number
      list = (0..9).to_a
      (0..3).map { list.delete_at(rand(list.size-1)) }
    end
  end
end

def main__
  Popup.msg "Hit & Blow 🔫"

  game = HitAndBlow.new

  loop do
    msg = []
    msg.push "Stage #{game.stage}"
    msg.push "❓❓❓❓🔫"
    # msg.push game.correct_answer.join("") # cheat..
    msg.push "Please enter 4-digit number."
    msg.push game.history.join("\n") if game.history.length > 0 

    input = Popup.input(msg.join("\n"))

    if input.nil?
      puts <<EOF
You lose.. 😩😩😩
#{game.correct_answer.join("")}
#{game.history.join("\n")}
EOF
      break
    end

    hit, blow = game.check(input)
    
    if hit == 4
      puts <<EOF
You win!! 😄😄😄💃
#{game.correct_answer.join("")}
#{game.history.join("\n")}
EOF
      break
    end
  end 
end
