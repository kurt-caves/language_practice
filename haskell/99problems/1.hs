myLast :: [a] -> a -- takes in a list and returns a single element
myLast [x] = x -- if there is a single element it returns that element
myLast (_:xs) = myLast xs -- the recursive part