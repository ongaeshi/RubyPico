# Define "main" function or "Chat" class

class HatenaBookmark
  def initialize
  end
  
  def welcome
    "カテゴリを入力 (例: 総合, 世の中)"
  end
  
  def call(input)
    url = RSS[input]
    
    if input == "カテゴリ"
      return RSS.keys.join("\n")
    end
    
    # argv = input.split(/\s+/)
    argv = input.split(" ")
    
    if argv[0] == "bm"
      url = argv[1] || @manuscript.last
      bookmark url
      return "#{url} をブックマーク"
    end

    if url
      feed = FeedReader.new url
      @items = feed.data['query']['results']['item']
      
      return sitemap
    end
    
    if input == 'all'
      @manuscript = []
      @items.each { |e| add_to_manuscript e }
      @i = 0
    end
    
    if (1..5).include? input.to_i
      @item = @items[input.to_i - 1]
      
      @manuscript = []
      add_to_manuscript @item
      @i = 0
    
      return speak
    end

    if @manuscript && @manuscript[@i]
      return speak
    end
    
    "?"
  end
  
  def timer
    if @manuscript && @manuscript[@i] &&
       Time.now - @prev_speak > 4.0
      return speak
    end

    nil
  end

  private
  
  def sitemap
    i = 0

    @items.map do |e|
      i += 1
      "#{i} #{e['title']}"
    end.join("\n")
  end
  
  def bookmark(url)
    Browser.open "hatenabookmark:/entry?url=#{url}"
  end
  
  def add_to_manuscript(item)
    @manuscript.push item['title']
      
    description = item['description']
      if description
        @manuscript.concat description.split("。").map { |e| e + "。" }
      end
    @manuscript.push item['link']
  end

  def speak
    txt = @manuscript[@i]
    @i += 1
    @prev_speak = Time.now
    txt
  end
end

class FeedReader
  attr_reader :data
  
  def initialize(url)
    feed = url
    count = 5
    
    url = "https://query.yahooapis.com/v1/public/yql?" + 
    URI.encode_www_form(
      q: "SELECT title,link,description,encoded FROM rss WHERE url=\"#{feed}\" | truncate(count=#{count})",
      format: "json"
      )

    @data = Browser.json url
  end
end

RSS = {
  "総合" => "http://b.hatena.ne.jp/hotentry.rss",
  "世の中" => "http://b.hatena.ne.jp/hotentry/social.rss",
  "政治と経済" => "http://b.hatena.ne.jp/hotentry/economics.rss",
  "暮らし" => "http://b.hatena.ne.jp/hotentry/life.rss",
  "学び" => "http://b.hatena.ne.jp/hotentry/knowledge.rss",
  "テクノロジー" => "http://b.hatena.ne.jp/hotentry/it.rss",
  "アニメとゲーム" => "http://b.hatena.ne.jp/hotentry/game.rss",
  "エンタメ" => "http://b.hatena.ne.jp/hotentry/entertainment.rss",
  "おもしろ" => "http://b.hatena.ne.jp/hotentry/fun.rss",
  "動画" => "http://b.hatena.ne.jp/video.rss",
}


