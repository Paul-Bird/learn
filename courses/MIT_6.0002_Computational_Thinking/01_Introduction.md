# Intro to Computational Thinking and Data Science
## MIT 6.0002 Fall 2016
### 1. Introduction

[Slides](https://ocw.mit.edu/courses/6-0002-introduction-to-computational-thinking-and-data-science-fall-2016/0a353b26f1c6bd161b28b3f249aa05d1_MIT6_0002F16_lec1.pdf)

#### Knapsack Problem

Collection of items with different weights and values, more than can fit. How to choose which items.  

Each item represented as: ```<value, weight>```  
Knapsack capacity = ```w```  
All items: vector ```L``` length ```n```  
Selected items: vector ```V``` length ```n``` where ```v[i]=0 v[i]=1```  

Brute force: generate the power set (all subsets) that fit. Choose the one with the largest value.  

For a large ```n``` this isn't going to be practical.  

Is there an algorithm we can use ? The short answer is no, the knapsack problem is inherently exponential.  

There are no prefect solutions, however there are some interesting good solutions.  

Calculate the best item, place in knapsack repeat until knapsack is full. Best is a choice, in this example ratio of value/weight would be an option.  

Example: [greedy](../../code/python/knapsack/greedy.py)  

```
def greedy(items, maxCost, keyFunction):
  itemsCopy = sorted(items, key=keyFunction, reverse=True)
  result = []
  totalValue, totalCost = 0.0, 0.0
 
  # best to worst as sorted by keyFunction  
  for i in range(len(itemsCopy)):
    # if there is room, add to knapsack, 
    # will skip if not enough room, and true next item
    if (totalCost + itemsCopy[i].getCost()) <= maxCost:
      result.append(itemsCopy[i])
      totalCost += itemsCopy[i].getCost()
      totalValue += itemsCopy[i].getValue()
  return (result, totalValue)
```

Efficiency is O(n log n):
- sort: n log n
- loop: n

Greedy algorithms can get you to a local maximum, but may miss the global maximum. 





