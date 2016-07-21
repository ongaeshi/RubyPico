module URI
  def self.encode_www_form(enum)
    enum.map do |k,v|
      if v.nil?
        encode_www_form_component(k)
      elsif v.respond_to?(:to_ary)
        v.to_ary.map do |w|
          str = encode_www_form_component(k)
          unless w.nil?
            str += '='
            str += encode_www_form_component(w)
          end
        end.join('&')
      else
        str = encode_www_form_component(k.to_s)
        str += '='
        str += encode_www_form_component(v)
      end
    end.join('&')
  end
end

module Browser
  def self.json(url)
    JSON::parse(get(url))
  end
end


