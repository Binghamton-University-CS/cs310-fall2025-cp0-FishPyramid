#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal a) {
    animal = a;
    numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}

void AnimalsInZoo::display() {
    cout << numAnimals << " ";
    if (numAnimals!=0)
        animal.display();
}