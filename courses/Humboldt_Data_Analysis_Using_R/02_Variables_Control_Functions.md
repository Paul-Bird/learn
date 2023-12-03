# Data Analysis Using R
## Humboldt University in Berlin - 2022
### 2. Variables, Control Structures and Functions

[Lecture PDF](https://dannyarends.nl/rlectures/Lecture02-MoreIntroduction.pdf)

[Assignment 2](https://dannyarends.nl/r2022/Assignment02-Moreintroduction.pdf)  

### [Variables](https://youtu.be/bldXk_mVMuI?list=PLhR2Go-lh6X4fCAa3c_TBAjZD5A25s7fo&t=3498)

```> vec1 <- c(1:10)```
```> length(vec1)```
```
[1] 10
```
### Control Structures

#### Branching

```
> rvalue = runif(1)  
> if (rvalue < 0.5) {
    cat("less than 0.5")  
} else if (rvalue > 0.5) {
    cat("greater than 0.5")
} else {  
    cat("equal to 0.5") 
}  
```

```
> someLetters <- c("A","B")
> switch(class(someLetters),
    logical = TRUE,
    numeric = 0,
    character = someLetters
)
```
```
[1] "A" "B"
```

```> vec1To10 <- 1:10```
```
if(all(vec1To10 < 9)) {
    cat("no")
}
if(any(vec1To10 < 9)) {
    cat("yes")
}
```

#### Looping

```for (x in 1:10) { cat(x) }```
```
12345678910
```

```stopValue <- 20```
```
while(stopValue > 10) { 
    stopValue = stopValue - 1 
    cat(stopValue, " ") 
}
```
```
19  18  17  16  15  14  13  12  11  10
```

```
> nums <- seq(1,100)
> t = 0
> for (n in nums) { t = t + n }
> t
[1] 5050
```

```
if (!TRUE || TRUE) {
    cat("always")
}
if (FALSE && TRUE) {
    cat("never")
}
```

```
> v1 = c(FALSE, TRUE, TRUE, FALSE)
> v2 = c(FALSE, TRUE, FALSE, TRUE)
> v1 & v2
[1] FALSE  TRUE FALSE FALSE
> v1 | v2
[1] FALSE  TRUE  TRUE  TRUE
> 
```

### In Vector Comparisons

```
sixtoone <- 6:1
sixtoone < 4
```
```
[1] FALSE FALSE FALSE  TRUE  TRUE  TRUE
```

Index directly results  
```
sixtoone[ sixtoone < 4]
```
```
[1] 3 2 1
```

c(1:10)[c(F,T)]

### ```warning``` & ```stop```

if (TRUE) warning("be careful")

if (TRUE) stop("error! stopped")

tryCatch( sqrt(-1),
    error = function(e) {
        print("oops")
    },
    finally = print("finally")
)

```
[1] "finally"
[1] NaN
```

```
X <- c("A","B","C")
lapply(X, cat)

X <- c(4,9,16)
lapply(X,sqrt)

X <- c(4,9,16)
unlist(lapply(X,"*",2))
```

```
X <- matrix(1:16,nrow = 4, ncol = 4)
apply(X, c(1,2), sqrt)
```
```
         [,1]     [,2]     [,3]     [,4]
[1,] 1.000000 2.236068 3.000000 3.605551
[2,] 1.414214 2.449490 3.162278 3.741657
[3,] 1.732051 2.645751 3.316625 3.872983
[4,] 2.000000 2.828427 3.464102 4.000000
```

### [Functions](https://youtu.be/bldXk_mVMuI?list=PLhR2Go-lh6X4fCAa3c_TBAjZD5A25s7fo&t=8476)

```
myFunction <- function(param1, param2){
    return(param1 * param2)
}
```
```myFunction(10,10)```
```
[1] 100
```
#### Pass by Promise

Parameters are references, unless they are changed then they become copies and are passed by value.
```
p1 = 10
p2 = 10
param2
p <- function(param1, param2=5){
    param1 = 12
    cat("param1 change to ", param1, "\n")
    return(param1 * param2)
}
p1
p(p1,p2) # 12 * 10 is 120
cat("p1 is still 10")
p1
p(p1) # 12 * 5 is 60
```

```
# Note: There is a built-in sum function
addup <- function(...) {
    r = 0
    for (i in list(...)) {
        r = r + i
    }
    return(r)
}
addup(1,2,3)
```

### Brackets

- () functions and control structures
- [] index to a vector, matrix or data.frame
- [[]] index in a list
- {} code block

### Misc
```
cat("A", "B", sep=":")
```

#### Uniform Distribution

```runif(1)```
```
[1] 0.6587903
```
```runif(10)```
```
 [1] 0.80597662 0.40106874 0.97262104 0.74100854 0.95756552 0.57772653
 [7] 0.94774575 0.04978771 0.31229016 0.02057104
```
```runif(4, min = 0.25, max = 0.75)```
```
[1] 0.4831469 0.2994058 0.4691259 0.5637750
```
#### Gausian Distribution

```rnorm(5)```
```
[1]  1.16043455  1.62122035 -0.25706160  0.07399028  0.94711913
```
```rnorm(5, mean = 1, sd = 0.5)```
```
[1] 0.7900833 1.6196821 0.8395455 1.3296478 0.7179269
```
#### Poisson Distribution

```rpois(5, lambda = 1)```
```
[1] 0 0 2 0 1
```
#### Repeatable Randomness

```set.seed(1)```
```runif(5,0,2)```
```
[1] 0.5310173 0.7442478 1.1457067 1.8164156 0.4033639
```
```runif(5,0,2)```
```
[1] 1.7967794 1.8893505 1.3215956 1.2582281 0.1235725
```
```set.seed(1)```
```runif(5,0,2)```
```
[1] 0.5310173 0.7442478 1.1457067 1.8164156 0.4033639
```
