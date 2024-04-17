#include "animal.h"

const char* animalClassToString(AnimalClass animalClass) {
    switch (animalClass) {
    case Mammal:
        return "Млекопитающее";
    case Bird:
        return "Птица";
    case Reptile:
        return "Рептилия";
    case Amphibian:
        return "Земноводное";
    case Fish:
        return "Рыба";
    default:
        return "Неизвестный класс";
    }
}