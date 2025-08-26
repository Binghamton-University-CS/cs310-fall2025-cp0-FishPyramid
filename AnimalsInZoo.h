#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
    public:
      AnimalsInZoo(Animal a) {
         animal = a;
         numAnimals = 1;
      }

      AnimalsInZoo() {
        numAnimals = 0;
      };

      void display();
    private:
        int numAnimals;
        Animal animal;
};