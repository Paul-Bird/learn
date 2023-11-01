fn main() {
    let result1 = n_choose_k(10, 6);
    let result2 = permutations(10, 6);
    println!("n_choose_k(10, 6) = {}", result1);
    println!("permutations(10, 6) = {}", result2);
}

// n choose k (nCk) is the number of ways to choose k items from a set of n items.
//  This is also known as the binomial coefficient.

// copilot generated
fn n_choose_k(n: u64, k: u64) -> u64 {
  if k > n {
    return 0;
  }
  if k == 0 || k == n {
    return 1;
  }
  let mut result = 1;
  for i in 1..=k {
    result *= n - k + i;
    result /= i;
  }
  result
}

// copilot generated
fn permutations(n: u64, k: u64) -> u64 {
  if k > n {
    return 0;
  }
  if k == 0 || k == n {
    return 1;
  }
  let mut result = 1;
  for i in 1..=k {
    result *= n - k + i;
  }
  result
}