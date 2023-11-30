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



