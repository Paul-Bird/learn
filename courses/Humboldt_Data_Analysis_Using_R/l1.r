# getwd ()
# dir ()
setwd("~/Documents/learning/Paul-Bird/learn/courses/Humboldt_Data_Analysis_Using_R")
dir()
# install .packages("ggplot2", repos = "http://cran.us.r-project.org")
# library (ggplot2)
# install .packages("qtl", repos = "http://cran.us.r-project.org")
# library (qtl)
object <- 10
save(object, file = "l1.RData")
object <- 20
object
load("l1.RData")
object
seq(1, 9, by = 2)
q("no")