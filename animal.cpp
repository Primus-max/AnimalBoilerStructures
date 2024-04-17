#include "animal.h"
#include <iostream>
#include <cstring>
using namespace std;

const char* animalClassToString(AnimalClass animalClass) {
    switch (animalClass) {
    case Mammal:
        return "Mammal";
    case Bird:
        return "Bird";
    case Reptile:
        return "Reptile";
    case Amphibian:
        return "Amphibian";
    case Fish:
        return "Fish";
    default:
        return "Unknown class";
    }
}


Animal createAnimal() {
    Animal newAnimal;
        
    cout << "Enter species for animal: ";    
    cin.getline(newAnimal.species, sizeof(newAnimal.species));

    cout << "Enter name for animal: ";
    cin.getline(newAnimal.name, sizeof(newAnimal.species));

    cout << "Choose class for animal: ";
    for (size_t i = 0; i < COUNT_CLASSES; ++i) {
        AnimalClass animalClass = static_cast<AnimalClass>(i);
        cout << "Enter " << i + 1 << " to choose " << animalClassToString(animalClass) << " class" << endl;
    }

    int choiceClassAnimal = 0;
    cin >> choiceClassAnimal;
    newAnimal.animalClass = static_cast<AnimalClass>(choiceClassAnimal);

    return newAnimal;
}

void Animal::printAnimal() {
    cout << "Species: " << species << endl;
    cout << "Name: " << name << endl;
    cout << "Class: " << animalClassToString(animalClass) << endl;
}
