import Pkg; 
Pkg.add("Combinatorics")
using Combinatorics
a = [1,2,3]
b = permutations(a)
for i in b
    println(i)
end