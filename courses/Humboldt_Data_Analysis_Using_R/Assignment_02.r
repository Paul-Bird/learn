# 1a
unknown <- runif(1)
# 1b
if (unknown < 0.5) {
  print("lower")
} else {
  print("higher")
}
# 1c
v1c <- round(runif(1, -10, 30))
if (!(v1c >= 0 && v1c <= 10)) {
  stop("v1c is not between 0 and 10")
}
v1c
# 2a
total2a <- 0
for (i in 1:1000) {
  total2a <- total2a + i
}
total2a
sum(1:1000)
#2b
total2b <- 0
i = 1
while (i <= 1000) {
  total2b <- total2b + i
  i <- i + 1
}
total2b
# 3a
for (i in 1:100) {
  x <- runif(1, 0, 100)
  if(x < 42) {
    cat("lower than 42\n")
  } else if (x == 42) {
    cat("is 42\n")
  } else {
    cat("higher than 42\n")
  }
}