1.upto(21) do |x|
	x = "0#{x}" if x < 10
	
	`cat ./t.txt ./day#{x}.cpp > ./temp && mv ./temp ./day#{x}.cpp`

	x.to_i
end
