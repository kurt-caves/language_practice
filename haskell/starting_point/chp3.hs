lucky :: Int -> String
lucky 7 = "lucky number seven"
lucky x = "sorry you are out of luck"

-- define the factorial function recursively
factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n-1)