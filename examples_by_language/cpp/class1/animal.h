#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
  public:
    static int count;
    string species;

    Animal(string species);
};

#endif