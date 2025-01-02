-- Guards
bookCategory :: Int -> String
-- Gaurd clause is used for different page ranges
bookCategory pages | pages < 100 = "Short Story"
                   | pages < 300 = "Novel"
                   | pages <= 1000 = "SK Book"
                   | otherwise = "We dont know"

main = do
  putStrLn "The category of your book is: "
  print (bookCategory 1000)