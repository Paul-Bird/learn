import math

def is_postcode_valid(postcode):
  #Todo trim spaces
  result = 0
  position = 0
  for c in reversed(postcode):
    if c.isalpha():
      result += math.pow(2, position)
    position += 1
  if (
    result == 107 or
    result == 43 or 
    result == 19 or 
    result == 35 or
    result == 19 or 
    result == 99):
      return True
  return False


print(is_postcode_valid("WC1A3CP"))
print(is_postcode_valid("WC1A"))
print(is_postcode_valid("CM235NA"))
print(is_postcode_valid("XYZ123"))
print(is_postcode_valid("-"))

# Valid UK postcode structure
# AA9A9AA   1101011  107 
# A9A9AA     101011   43
# A99AA       10011   19
# A999AA     100011   35
# AA99AA     110011   51
# AA999AA   1100011   99