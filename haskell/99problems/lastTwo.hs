twoLast :: [a] -> [a] -- takes in a list and returns a list
twoLast [x,y] = [x,y] -- base case, when the last two elements are left
twoLast (_:xs) = twoLast xs -- recursively strip the head
lastTwo _ = [] -- handle empty or single element list