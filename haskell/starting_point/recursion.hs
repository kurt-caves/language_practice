
-- factorial
-- base case = 0
-- f(5) = 5 * 4 * 3 * 2 * 1
-- factorial n = n * factorial (n - 1)

factorial :: Word -> Word
-- when we get down to 0, multiply by 1 not 0
factorial 0 = 1 -- base case
factorial n = n * factorial (n - 1) -- recursive case

main = do
    putStrLn "Factorial of your number is: "
    print(factorial(50))
