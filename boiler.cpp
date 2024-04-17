#include <iostream>
#include <Windows.h>
#include "boiler.h"

void setColor(BoilerColor color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}