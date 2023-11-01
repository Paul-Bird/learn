def factorial(n):
  if n<2:
    return 1
  return n * factorial(n-1)

def n_choose_m(n,m):
  return int(factorial(n)/factorial(n-m))

print(f'2_choose_1: {n_choose_m(2,1)}')
print(f'10_choose_6: {n_choose_m(10,6)}')