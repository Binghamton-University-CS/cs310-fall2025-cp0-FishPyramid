#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

    void AnimalsInZoo::display() {
        cout << numAnimals << " ";
        if (numAnimals!=0)
            animal.display();
    }