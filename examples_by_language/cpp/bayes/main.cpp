#include <iostream>

using namespace std;

double bayes_probability(double a, double b);

int main()
{
  cout << "a:1 b:1" << endl;
  cout << "P(a|b) " << bayes_probability(1,2) << endl;
}

double bayes_probability(double a, double b){
  // P(A|B) = P(B|A)P(A) / P(B)
  // TODO
  return a;
}