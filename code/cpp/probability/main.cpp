#include <iostream>

using namespace std;

long factorial(const int n);
long n_choose_k(int n, int k);

int main()
{
  #if __cplusplus == 201703L
    std::cout << "C++17\n";
  #endif
  int n, k;
  cout << "n choose k n<=20 \n";
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter k: ";
  cin >> k;
  cout << "Factorial of " << n << ": " << factorial(n) << endl; 
  cout << "n choose k: " << n_choose_k(n, k) << endl;
  return 0;
}

long n_choose_k(int n, int k){
  return factorial(n) / (factorial(k) * factorial(n-k));
}

long factorial(const int n)
{
    long r = 1;
    for (int i=1; i<=n; ++i)
        r *= i;
    return r;
}