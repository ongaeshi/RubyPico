require 'simplehttpserver'

server = SimpleHttpServer.new({
  :server_ip => "0.0.0.0",
  :port  =>  8000,
  :document_root => "./",
  # :debug => true,
})

server.http do |r|
  server.set_response_headers({
    "Server" => "file_server",
    "Date" => server.http_date,
  })
end

server.location "/" do |r|
  server.file_response r, r.path[1..-1], "text/plain"
end

puts server.url
server.run

