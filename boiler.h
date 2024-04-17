#pragma once
#include <iostream>
#include <Windows.h>

enum  BoilerColor
{
	RED = FOREGROUND_RED,
	GREEN = FOREGROUND_GREEN,
	BLUE = FOREGROUND_BLUE,
	YELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
	RESET_COLOR = GREEN | BLUE | RED,
	COUNT_COLORS
};

struct  Boiler
{
	char FirmName[20];
	BoilerColor Color;
	short Power;
	short Volume;
	short HeatingTemperature;
};

void setColor(BoilerColor color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}