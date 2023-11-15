import Pkg; 
Pkg.add("Combinatorics")
using Combinatorics
a = [1,2,3]
b = permutations(a)
print("permutations of a:\n")
for i in b
    println(i)
end