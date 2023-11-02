# Advanced Algorithms 
## Harvard COMPSCI 224 - 2016 
### Lecture 1 - Introduction

#### Static Predecessor

- Data structure represents S a set of items $ \{ x_1, ..., x_n \} $  
- Query: $ pred(z) = \text{max} \{ x \in S: x<z \} $  
- Want low space, fast query
- Statis - no insertions
- Dynamic - insertions

Example solutions
- Store sorted and do a binary search  
  - Static 
  - $ O(log_n) $ query time
- Balanced BST
  - Dynamic
  - $ O(log_n) $ query time

#### Word RAM Model


#### van Emde Boas Tree - 1975

