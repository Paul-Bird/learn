# Design and Analysis of Algorithms
## MIT 6.046J - Spring 2015
### 1 Overview

Similar Problems can have different Complexity

P: Class of problems solvable in polynominal time. $ O(n^k) $  
- example - shortest path $ O(n^2) $

NP: Class of problems verifiable in polynominal time.
- example Hamiltonian cycle problem. Given a directed graph find a simple cycle that contains each vertex.

NP-complete: Problem in NP as hard as any NP problem

#### Interval Scheduling

For a resource and requests  
$ s(i) $ start time, $ f(i) $ finish time $ s(i) < f(i) $  
Two requests if $ i $ and $ j $ are compatible if they don't overlap:  
$$ f(i) \leq s(j) \quad \text{or} \quad f(j) \leq s(i) $$  

Given a set of requests, efficiently select the maximum subset of requests that are compatible.

Claim: We can solve this problem using a greedy algorithm

> A greedy algorithm is a myopic algorithm
> - processes input one piece at a time
> - no look ahead

#### Greedy Interval Scheduling

1. Use a simple rule to select a interval $ i $
2. Reject all incompatible with $ i $
3. Repeat until all intervals are processed

Strategies for Step 1
1. In order provided  
2. Shortest request first  
3. Count number of incompatible intervals for each  
4. Pick the one that finishes earliest  $ \checkmark $  

Claim: Given a list of intervals L, greedy algorithm with earliest finish time produces $ k^* $ intervals where $ k^* $ is maximal

Proof by Induction on $ k^* $
- Basecase $ k^* = 1 $  any interval works
- $ S^*[1,2,...k^* + 1] = <s(j_1), f(j_1)>, ... <s(j_{k*+1}), f(j_{k*+1})> $

44:20
