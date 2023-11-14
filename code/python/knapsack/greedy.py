from food import Food

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

def testGreedy(items, constraint, keyFunction):
  taken, val = greedy(items, constraint, keyFunction)
  print('Total value of items taken =', val)
  for item in taken:
    print('  ', item.calories, item.name)

items = [
  Food('wine', 89, 123), 
  Food('beer', 90, 154), 
  Food('pizza', 95, 258), 
  Food('burger', 100, 354), 
  Food('fries', 90, 365), 
  Food('cola', 79, 150),
  Food('apple', 50, 95),
  Food('cake', 10, 195),
  ]
print('most value first') 
testGreedy(items, 1000, Food.getValue)  
print('density value/calories') 
testGreedy(items, 1000, Food.density)
print('1/getCost()') 
testGreedy(items, 1000, lambda x: 1/Food.getCost(x))  
print('')
