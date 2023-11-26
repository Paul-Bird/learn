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

### Functions


### Brackets

