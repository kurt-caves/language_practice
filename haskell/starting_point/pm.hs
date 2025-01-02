-- from https://www.youtube.com/watch?v=TklkNLihQ_A
-- pattern matching
coffeType :: String -> String -- func that takes string and returns string

-- a series of "if" statements
coffeType "Espresso" = "Strong and Bold"
coffeType "Latte" = "Milky and weird"
coffeType "Cappuccino" = "Frothy and Rich"
coffeType _ = "Unkown coffe type" -- pattern matching, the underline

main = do
    putStrLn "Your Coffee description is: "
    print(coffeType "Espresso")
    print(coffeType "Latte")
    print(coffeType "Bread")