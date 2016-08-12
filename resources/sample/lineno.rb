# # lineno
#
# ## Description
# Put a line no

src = Clipboard.get.split("\n")
column = src.length.to_s.length

(1..src.length).map do |e|
  puts sprintf("%#{column}d: %s", e, src[e - 1])
end
