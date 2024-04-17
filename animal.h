#pragma once

enum  AnimalClass {
    Mammal,
    Bird,
    Reptile,
    Amphibian,
    Fish
};

struct Animal
{
	char species[20];
	char name[20];
};

const char* animalClassToString(AnimalClass animalClass);