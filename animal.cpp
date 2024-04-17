#include "animal.h"
#include <iostream>
#include <cstring>

using namespace std;

const char* animalTypeToString(AnimalType animalType) {
    switch (animalType) {
    case Dog:
        return "Dog";
    case Cat:
        return "Cat";
    case Lion:
        return "Lion";
    case Frog:
        return "Frog";
    case Shark:
        return "Shark";
    default:
        return "Unknown type";
    }
}

const char* soundsAnimals [COUNT_TYPES] = {
    "Waf Waf",      // Dog
    "Meow",         // Cat
    "Roar",         // Lion
    "Croak",        // Frog
    "Theme"         // Shark
};

Animal createAnimal() {
    Animal newAnimal;
        
    cout << "Enter species for animal: ";    
    cin.getline(newAnimal.species, sizeof(newAnimal.species));

    cout << "Enter name for animal: ";
    cin.getline(newAnimal.name, sizeof(newAnimal.species));

    cout << "Choose type for animal: " << endl;
    for (size_t i = 0; i < COUNT_TYPES; ++i) {
        AnimalType animalClass = static_cast<AnimalType>(i);
        cout << "Enter " << i + 1 << " to choose " << animalTypeToString(animalClass) << " class" << endl;
    }

    int choiceClassAnimal = 0;
    cin >> choiceClassAnimal;
    newAnimal.animalType = static_cast<AnimalType>(choiceClassAnimal - 1);

    return newAnimal;
}

void Animal::printAnimal() {
    cout << "Species: " << species << endl;
    cout << "Name: " << name << endl;
    cout << "Type: " << animalTypeToString(animalType) << endl;
}

void Animal::playSound() {
    cout << animalTypeToString(animalType) << " say " << " : " << soundsAnimals[animalType] << endl;
}