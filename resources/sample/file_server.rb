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
  path = File.join server.config[:document_root], r.path

  if File.directory? path
    server.set_response_headers "Content-type" => "text/html; charset=utf-8"

    files = Dir.entries(path).map do |e|
      "    <li><a href=\"#{File.join r.path, e}\">#{e}</a></li>"
    end

    server.response_body = <<EOS
<html>
<head>
  <title>#{r.path}</title>
</head>
<body>
  <h1>#{r.path}</h1>
  <ul>
    #{files.join("\n")}
  </ul>
</body>
</html>
EOS

    server.create_response
  else
    server.file_response r, path, "text/plain"
  end
end

puts server.url
server.run

