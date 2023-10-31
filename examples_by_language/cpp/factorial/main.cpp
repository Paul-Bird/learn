#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
  cout << "factorial(-2): " << factorial(-2) << endl;
  cout << "factorial(1): " << factorial(1) << endl;
  cout << "factorial(3): " << factorial(3) << endl;
  cout << "factorial(5): " << factorial(5) << endl;
}

int factorial(int n){
  if (n<0) return 0; // magic number for not supported
  if (n<2) return n;
  return n * factorial(n-1);
}