# # clipboard
#
# ## Description
# Read and Write clipboard

src = Clipboard.get
header = Popup.input "Header?"

result = src.split("\n").map { |e| header + e }.join("\n")

Clipboard.set(result)
puts result
