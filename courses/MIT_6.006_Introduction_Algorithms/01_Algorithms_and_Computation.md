# Introduction to Algorithms
## MIT 6.006 Spring 2020
### 1. Algorithms and Computation

[Lecture 1 Notes](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/477c78e0af2df61fa205bcc6cb613ceb_MIT6_006S20_lec1.pdf)  

#### Algorithms

Efficient procedures to solve problems.  
Communicate to others a solution is correct and efficient.  

##### Birthday Problem

Find people from a group with same birthday.

> Possible algorithm  
> - Maintain record
> - go through students in some order 
>   - check if birthday already recorded
>     - if so return pair
>   - add new student birthday to record,
> - return no match

Correctness

> Inductive Hypothesis: If first k students contain a match the algorthm returns the match before reaching student k+1.  
> Base case: no students , no match $ \checkmark $  
> Inductive step: Assume Inductive Hypothesis true for $ k=k' $  
> two outomes { match already found, else k'+1 checked against all students }  
>  

Efficeincy

> Measure algorithm, not a particular implementation.  
> Measure number of operations relative to the input size, not time.  
>  
> Asymptotic Notation used to measure an algorithm:
> - $ O(n) $ upper bounds
> - $ \Omega (n) $ lower bounds
> - $ \Theta (n)$ both
>  
> From fastest to slowest:
> - $ O(1) $ constant time
> - $ O(log \: n) $ logarithmic time
> - $ O(n) $ linear time 
> - $ O(n \: log \: n) $ log linear / n log n time
> - $ O(n^c) $ polynominal time
> - $ O(2^n) $ exponential time

Model of Computation

37:13
