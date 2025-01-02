-- Where clause is a construct
popDensity :: (Float, Float) -> Float

popDensity (population, area) = density where density = population / area

main = do
    print(popDensity(11000000.25, 850.78))