#include <iostream>
#include "animal.h"

using namespace std;

int main()
{
  Animal *lion = new Animal("lion");
  Animal *lion2 = new Animal("lion");
  cout << lion->species << endl;
  cout << Animal::count << endl;
  return 0;
}