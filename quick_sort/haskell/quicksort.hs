quicksort :: Ord a => [a] -> [a]
quicksort [] = []
quicksort (x:xs) = smaller xs ++ [x] ++ bigger xs
                     where
                       smaller xs = quicksort [x' | x' <- xs, x' <= x]
                       bigger xs = quicksort [x' | x' <- xs, x' > x]

