#include "animal.h"

const char* animalClassToString(AnimalClass animalClass) {
    switch (animalClass) {
    case Mammal:
        return "�������������";
    case Bird:
        return "�����";
    case Reptile:
        return "��������";
    case Amphibian:
        return "�����������";
    case Fish:
        return "����";
    default:
        return "����������� �����";
    }
}