// AnimalBoilerStructures.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "boiler.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	Boiler boiler;

#pragma region Инициализация бойлера 
	
	char firmName[sizeof(boiler.FirmName)];
	cout << "Build boiler,  please enter name boiler: ";
	cin >> firmName;
	strcpy_s(boiler.FirmName, sizeof(boiler.FirmName), firmName);
	cout << "Build boiler,  please select color for boiler: " << endl;
	int choiceColor = 0;
	for (int i = 0; i < COUNT_COLORS; ++i) {
		BoilerColor color = static_cast<BoilerColor>(i);
		setColor(color);
		cout << "For select this color, set number " << i << endl;
	}
	setColor(RESET_COLOR); // Сброс цвета обратно на стандартный
	cin >> choiceColor;

	if (choiceColor >= 0 && choiceColor < COUNT_COLORS) {
		boiler.Color = static_cast<BoilerColor>(choiceColor);
	}
	else {
		cout << "Invalid color number entered, please try again." << endl;
		main();
	}

	cout << "Point the boiler power: ";	
	cin >> boiler.Power;
	cout << endl;


	
#pragma endregion

#pragma region Печать бойлера
	cout << "Builded boiler" << endl;
	cout << "\n";
	cout << "---->";
	cout << "Boiler name : " << boiler.FirmName << endl;
	cout << "---->";
	cout << "Boiler color : ";
	setColor(boiler.Color);
	cout << "This";
	setColor(RESET_COLOR);
	cout << "\n";
#pragma endregion


	

}
