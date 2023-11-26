# https://dannyarends.nl/r2022/Assignment01-Introduction.pdf
#
# Calculator
#1a) Addition
1234 + 4567
#1b) Subtraction
100 - 77
#1c) Logarithm
log(15)
#1d) Division
4596 / 12
#1e) Multiplication
25 * 25
#1f) Modulo
10 %% 6
#1g) Complex Square root
sqrt(-8 + 0i)
#
10 %/% 6
Inf + 1
letters[10]
month.name[10]
pi
sin(pi / 6)
cos(pi / 3)
tan(pi / 4)
exp(1)
log10(100)
log2(256)
exp(1)
#
# Vectors
#
#2a) Use the c() function to create a vector from 1 to 10
vec1 <- c(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
vec1
#2b) Use the : operator to create a vector from 11 to 20
vec2 <- 11:20
vec2
#2c) Use the seq() function to create a vector from 1 to 100 step 5
vec3 <- seq(1, 100, 5)
vec3
sqrt(vec3)
class(c(vec2, vec3))
vec4 <- LETTERS[seq(2, 26, 2)]
vec4
#
# Matrices
#
matrix1a <- matrix(1:100, nrow = 10, ncol = 10)
matrix1b <- matrix(1:100, nrow = 10, ncol = 10, byrow = TRUE)
rownames(matrix1a) <- paste(rep("measurement",10),1:10, sep = " ")
matrix1a
