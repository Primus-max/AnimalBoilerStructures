#pragma once

#include <iostream>
#include <map>
using namespace std;

enum AnimalType {
    Dog,
    Cat,
    Lion,
    Frog,
    Shark,
    COUNT_TYPES
};

extern const char* soundsAnimals[COUNT_TYPES];

const char* animalTypeToString(AnimalType animalType);

struct Animal {
    char species[20];
    char name[20];
    AnimalType animalType;

    void printAnimal();
    void playSound();
};

Animal createAnimal();
