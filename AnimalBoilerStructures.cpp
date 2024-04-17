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

	cout << "Point the boiler volume: ";
	cin >> boiler.Volume;
	cout << endl;
	

	cout << "Point the boiler Heating temperature: ";
	cin >> boiler.HeatingTemperature;
	cout << endl;
#pragma endregion

#pragma region Печать бойлера
	cout << "\n";
	cout << "Builded boiler" << endl;	

	cout << "---->";
	cout << "Boiler name : " << boiler.FirmName << endl;

	cout << "---->";
	cout << "Boiler color : ";
	setColor(boiler.Color);
	cout << "This" << endl;
	setColor(RESET_COLOR);	

	cout << "---->";
	cout << "Boiler power : " << boiler.Power << " kWt "<< endl;
	
	cout << "---->";
	cout << "Boiler volume : " << boiler.Volume << " cap. " << endl;
	
	cout << "---->";
	cout << "Boiler Heating temperature : " << boiler.HeatingTemperature << " °C " << endl;
	cout << "\n";
#pragma endregion



}
