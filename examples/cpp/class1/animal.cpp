#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal(string s){
  species=s;
  count++;
}

int Animal::count = 0;