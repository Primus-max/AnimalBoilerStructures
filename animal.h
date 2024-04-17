#pragma once

#include <iostream>
using namespace std;

enum AnimalClass {
    Mammal,
    Bird,
    Reptile,
    Amphibian,
    Fish,
    COUNT_CLASSES
};

const char* animalClassToString(AnimalClass animalClass);

struct Animal {
    char species[20];
    char name[20];
    AnimalClass animalClass;

    void printAnimal();
};

Animal createAnimal();
