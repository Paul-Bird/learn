# Data Analysis Using R
## Humboldt University in Berlin - 2022
### 1. History and Introduction

[Lecture PDF](https://dannyarends.nl/rlectures/Lecture01-Introduction.pdf)

[Assignment 1](https://dannyarends.nl/assignments/Assignment01-Introduction.pdf)  

### History

- 2400 BC Babylon - Abacus, external memory  
- 1110 BC China - Differential gears (South pointing chariot)  
- 200 BC China - Chinese Abacus  
- 120 BC Greece - Antikythera mechanism  
- 801 Iraq [Al-Kindi](https://en.wikipedia.org/wiki/Al-Kindi) cryptography  
- 1206 Artuqid [Al-Jazari](https://en.wikipedia.org/wiki/Ismail_al-Jazari) Elephant Clock  
- 1673 Germany [Leibniz Wheel](https://en.wikipedia.org/wiki/Leibniz_wheel)  
- 1791-1871 UK [Charles Babbage](https://en.wikipedia.org/wiki/Charles_Babbage)  
- 1815-1852 UK [Ada Lovelace](https://en.wikipedia.org/wiki/Ada_Lovelace)  
- 1912-1954 UK [Alan Turing](https://en.wikipedia.org/wiki/Alan_Turing)  
- 1941 Gemany [Z3](https://en.wikipedia.org/wiki/Z3_(computer))  
- 1943 UK [Colossus](https://en.wikipedia.org/wiki/Colossus_computer)  
- 1945 USA [ENIAC](https://en.wikipedia.org/wiki/ENIAC)  
- 1945 USA [Von Neumann architecture](https://en.wikipedia.org/wiki/Von_Neumann_architecture) 
- 1958 USA [Lisp Programming Language](https://en.wikipedia.org/wiki/Lisp_(programming_language)) 
- 1972 USA [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))  
- 1976 Poland Quantum Information Theory [Roman Stanisław Ingarden](https://en.wikipedia.org/wiki/Roman_Stanis%C5%82aw_Ingarden)  
- 1985 UK [Universal quantum computer](https://en.wikipedia.org/wiki/Quantum_Turing_machine) [David Deutsch](https://en.wikipedia.org/wiki/David_Deutsch)  
- 1993 New Zealand / Canada [R Programming Language](https://en.wikipedia.org/wiki/R_(programming_language))  
- 2020 [D-Wave](https://en.wikipedia.org/wiki/D-Wave_Systems) Advantage 5000 qbit Quantum Computer  

### Why R

- Open source  
- Statistical computing  
- Linear and non-linear models  
- Built in graphics  
- R Studio / command line  

### R as a Calculator
```
> 1+4
[1] 5
> 5^2
[1] 25
> 5**2
[1] 25
>10%%6
[1] 4
>10 %/% 6
[1]1
>log(25)
[1] 3.218876
>Inf + 1
[1] Inf
```

```
>letters[10]
[1] "j"
>LETTERS[10]
[1] "J"
>month.name[10]
[1] "October"
```

### Session
```
>getwd()
>ls()
```


### Packages
Example: [R/qtl](https://rqtl.org/)

```
>install.packages("qtl")

```

### Save & Load

```> object <- 10```  
```> save(object,"l1.RData")```  
```> object <- 20```  
```> load("l1.RData")```  

### Help

```> ?seq```

```seq(1, 9, by = 2)```  
```[1] 1 3 5 7 9```  

```??"deviation"```  

### Datatypes

#### Logical

TRUE, FALSE  

#### Numeric

5, 7.7

#### Character

"hello"

#### Vector

Indexed from 1  

```> logivec=c(FALSE, TRUE, FALSE)```  
```
[1] FALSE  TRUE FALSE
```  
```> charvec = c("one","two","three")```  
```
[1] "one"   "two"   "three"
```  
```> numvec = c(1,2,3.3)```  
```
[1] 1.0 2.0 3.3
```  

#### Matrix

Indexed from 1,1

```X <- matrix(1:16,nrow = 4, ncol = 4)```
```
     [,1] [,2] [,3] [,4]
[1,]    1    5    9   13
[2,]    2    6   10   14
[3,]    3    7   11   15
[4,]    4    8   12   16
```
```X <- matrix(1:16,nrow = 4, ncol = 4, byrow=TRUE)```
```
     [,1] [,2] [,3] [,4]
[1,]    1    2    3    4
[2,]    5    6    7    8
[3,]    9   10   11   12
[4,]   13   14   15   16
```

```> X[,4]```
```
[1]  4  8 12 16
```
```X[4,]```
```
[1] 13 14 15 16
```
```X[3,3]```
```
[1] 11
```

#### Working With Types

length(object)  
```length(X)```
```
[1] 16
```

class(object)  
```> class(X)```
```
[1] "matrix" "array" 
```

as  
```as.character(1)```
```
[1] "1"
```
```as.numeric("1")```
```
[1] 1
```

is  
```> is.character(X)```
```
[1] FALSE
```
```> is.array(X)```
```
[1] TRUE
```
```> is.matrix(X)```
```
[1] TRUE
```

str  
```> str(X)```
```
int [1:4, 1:4] 1 5 9 13 2 6 10 14 3 7 ...
```

```> Z = rep("A",5)```
```
[1] "A" "A" "A" "A" "A"
```

```> cbind(1,2,3,4)```
```
     [,1] [,2] [,3] [,4]
[1,]    1    2    3    4
```

```> cbind(1:4,5:8)```
```
     [,1] [,2]
[1,]    1    5
[2,]    2    6
[3,]    3    7
[4,]    4    8
```

```> rbind(4,5,6,7)```
```
     [,1]
[1,]    4
[2,]    5
[3,]    6
[4,]    7
```

```> v <- 1:10```
```> v[2:5]```
```
[1] 2 3 4 5
```
```> v[c(2:5,8)]```
```
[1] 2 3 4 5 8
```

### Data Frame

```> n1 = c(1,2,3,4)```
```> c1 = c("A","G","C","T")```
```> df1 = data.frame(n1,c1)```
```df1```
```
  n1 c1
1  1  A
2  2  G
3  3  C
4  4  T
```

### List
```w <- list(num1 = 2, tf = TRUE, letter="Z")```
```w```
```
$num1
[1] 2

$tf
[1] TRUE

$letter
[1] "Z"
```
```w["tf"]```
```
$tf
[1] TRUE
```
```w$tf```
```
[1] TRUE
```

```> str(w)```
```
List of 3
 $ num1  : num 2
 $ tf    : logi TRUE
 $ letter: chr "Z"
```
```class(w)```
```
[1] "list"
```

### Factor

```sex <- as.factor(c(rep("male",20), rep("female",30)))```

[Test](https://youtu.be/FbFMFcV2yBM?list=PLhR2Go-lh6X4fCAa3c_TBAjZD5A25s7fo&t=9482)  

```> rownames(X) <- c("A", "B", "C", "D")```
```> colnames(X) <- c("1", "2", "3", "4")```
```>X```
```
   1  2  3  4
A  1  2  3  4
B  5  6  7  8
C  9 10 11 12
D 13 14 15 16
```
```> t(X)```
```
  A B  C  D
1 1 5  9 13
2 2 6 10 14
3 3 7 11 15
4 4 8 12 16
```

[Variables](https://youtu.be/FbFMFcV2yBM?list=PLhR2Go-lh6X4fCAa3c_TBAjZD5A25s7fo&t=11055)  

Can use <- or = for assignment.  

```> mm <- 5```  
```> mm = 5```  
```> 5 -> mm```  









