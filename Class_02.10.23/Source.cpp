#include <iostream>

using namespace std;

struct Iron
{
	string company;
	string model;
	string color;
	string power;
	string min_temperature;
	string max_temperature;
	bool steam_supply;


	void Print() {

		cout << "company: " << company;
		cout << "model: " << model;
		cout << "color: " << color;
		cout << "power: " << power;
		cout << "min_temperature: " << min_temperature;
		cout << "max_temperature: " << max_temperature;
		cout << "steam_supply: " << steam_supply;
	}

	Iron Create() {

		Iron temp;

		cout << "Enter company: "; cin >> company;
		cout << "Enter model: "; cin >> model;
		cout << "Enter color: "; cin >> color;
		cout << "Enter power: "; cin >> power;
		cout << "Enter min_temperature: "; cin >> min_temperature;
		cout << "Enter max_temperature: "; cin >> max_temperature;
		cout << "Enter steam_supply: "; cin >> steam_supply;

		return temp;
	}

	void Fill() {

		cout << "Enter company: "; cin >> company;
		cout << "Enter model: "; cin >> model;
		cout << "Enter color: "; cin >> color;
		cout << "Enter power: "; cin >> power;
		cout << "Enter min_temperature: "; cin >> min_temperature;
		cout << "Enter max_temperature: "; cin >> max_temperature;
		cout << "Enter steam_supply: "; cin >> steam_supply;
	}

	void Change() {

		int choice;

		cout << "Enter what to change:\n[1] - company\n[2] - model\n[3] - color\n[4] - power\n[5] - min_temperature\n[6] - max_temperature\n[7] - steam_supply" << endl;
		cout << "___--- "; cin >> choice;

		switch (choice)
		{
		case 1: // Change company
			cout << "Enter new company:"; cin >> company;
			break;
		case 2:  // Change model
			cout << "Enter new model:"; cin >> model;
			break;
		case 3:  // Change color
			cout << "Enter new color:"; cin >> color;
			break;
		case 4:  // Change power
			cout << "Enter new power:"; cin >> power;
			break;
		case 5:  // Change min_temperature
			cout << "Enter new min_temperature:"; cin >> min_temperature;
			break;
		case 6:  // Change max_temperature
			cout << "Enter new max_temperature:"; cin >> max_temperature;
			break;
		case 7:  // Change steam_supply
			cout << "Enter new steam_supply:"; cin >> steam_supply;
			break;
		default: cout << "Wrong choice!" << endl; break;
		}
	}
};


void ReadLine() {

	int size = 100;
	char* arr = new char[size];

	int counter = 0;
	char ch;

	cout << "Enter your line (or [\\n] to exit): " << endl;

	for (int i = 0; i < size - 1; i++)
	{
		cin.get(ch);

		if (ch == '\n') {

			arr[i] = '\0';
			break;
		}
		else {

			arr[i] = ch;
			counter++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		counter += sizeof(arr[i]);
	}

	delete[] arr;
}

void main() {

	int choice;

	cout << "\\___---___/ MENU \\___---___/" << endl;
	cout << "[1] - \n[2] - \n[3] - \n[4] - \n[5] - \n[6] - \n" << endl;
	cout << "___---'  "; cin >> choice;

	switch (choice)
	{
	case 1: break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	default: cout << "Wrong choice!" << endl; break;
	}
}