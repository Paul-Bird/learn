squares = [ i^2 for i in 1:10 ]
squares
squaresofeven = [ i^2 for i in 2:2:12 ] # 6-element Vector{Int64}:
squaresofeven
squaresofeven2 = [x^2 for x in 1:12 if x % 2 == 0]
squaresofeven2
# map used as an alternative to comprehensions
squaresofeven3 = map(x -> x^2, filter(x -> x % 2 == 0, 1:12))   
squaresofeven3
is_even(x) = x % 2 == 0 
squaresofeven4 = map(x -> x^2, filter(is_even, 1:14))   
squaresofeven4  



