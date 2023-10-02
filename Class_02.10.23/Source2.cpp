#include <iostream>

using namespace std;

struct Boiler
{
	string company;
	string color;
	string power;
	string volume;
	string heating_temperature;

	void Print() {

		cout << "company: " << company;
		cout << "color: " << color;
		cout << "power: " << power;
		cout << "volume: " << volume;
		cout << "heating_temperature: " << heating_temperature;
	}

	Boiler Create() {

		Boiler temp;

		cout << "Enter company: "; cin >> company;
		cout << "Enter color: "; cin >> color;
		cout << "Enter power: "; cin >> power;
		cout << "Enter volume: "; cin >> volume;
		cout << "Enter heating_temperature: "; cin >> heating_temperature;

		return temp;
	}

	void Fill() {

		cout << "Enter company: "; cin >> company;
		cout << "Enter color: "; cin >> color;
		cout << "Enter power: "; cin >> power;
		cout << "Enter volume: "; cin >> volume;
		cout << "Enter heating_temperature: "; cin >> heating_temperature;
	}

	void Change() {

		int choice;

		cout << "Enter what to change:\n[1] - company\n[2] - color\n[3] - power\n[4] - volume\n[5] - heating_temperature\n[7] - steam_supply" << endl;
		cout << "___--- "; cin >> choice;

		switch (choice)
		{
		case 1: // Change company
			cout << "Enter new company:"; cin >> company;
			break;
		case 2:  // Change color
			cout << "Enter new color:"; cin >> color;
			break;
		case 3:  // Change power
			cout << "Enter new power:"; cin >> power;
			break;
		case 4:  // Change volume
			cout << "Enter new volume:"; cin >> volume;
			break;
		case 5:  // Change max_temperature
			cout << "Enter new max_temperature:"; cin >> heating_temperature;
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