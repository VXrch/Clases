#include <iostream>

using namespace std;

struct WashMachine
{
	string height;
	string width;
	string power;
	string company;
	string color;
	string length;

	string speed;
	string spin_rate;
	string spin_speed;
	string heating_temperature;


	void Print() {

		cout << "height: " << height;
		cout << "width: " << width;
		cout << "power: " << power;
		cout << "company: " << company;
		cout << "color: " << color;
		cout << "length: " << length;

		cout << "speed: " << speed;
		cout << "spin_rate: " << spin_rate;
		cout << "spin_speed: " << spin_speed;
		cout << "heating_temperature: " << heating_temperature;
	}

	void Create() {

		cout << "Enter height: "; cin >> height;
		cout << "Enter width: "; cin >> width;
		cout << "Enter power: "; cin >> power;
		cout << "Enter company: "; cin >> company;
		cout << "Enter color: "; cin >> color;
		cout << "Enter length: "; cin >> length;

		cout << "Enter speed: "; cin >> speed;
		cout << "Enter spin_rate: "; cin >> spin_rate;
		cout << "Enter spin_speed: "; cin >> spin_speed;
		cout << "Enter heating_temperature: "; cin >> heating_temperature;
	}
	
	void Fill() {

		cout << "Enter height: "; cin >> height;
		cout << "Enter width: "; cin >> width;
		cout << "Enter power: "; cin >> power;
		cout << "Enter company: "; cin >> company;
		cout << "Enter color: "; cin >> color;
		cout << "Enter length: "; cin >> length;

		cout << "Enter speed: "; cin >> speed;
		cout << "Enter spin_rate: "; cin >> spin_rate;
		cout << "Enter spin_speed: "; cin >> spin_speed;
		cout << "Enter heating_temperature: "; cin >> heating_temperature;
	}

	void Change(WashMachine& examp) {

		int choice;

		cout << "Enter what to change:\n[1] - height\n[2] - width\n[3] - power\n[4] - company\n[5] - color\n[6] - length\n[7] - speed\n[8] - spin_rate\n[9] - spin_speed\n[10] - heating_temperature" << endl;
		cout << "___--- "; cin >> choice;

		switch (choice)
		{
		case 1: // Change height
			cout << "Enter new height:"; cin >> height;
			break;
		case 2:  // Change width
			cout << "Enter new width:"; cin >> width;
			break;
		case 3:  // Change power
			cout << "Enter new power:"; cin >> power;
			break;
		case 4:  // Change company
			cout << "Enter new company:"; cin >> company;
			break;
		case 5:  // Change color
			cout << "Enter new color:"; cin >> color;
			break;
		case 6:  // Change length
			cout << "Enter new length:"; cin >> length;
			break;
		case 7:  // Change speed
			cout << "Enter new speed:"; cin >> speed;
			break;
		case 8:  // Change spin_rate
			cout << "Enter new spin_rate:"; cin >> spin_rate;
			break;
		case 9:  // Change spin_speed
			cout << "Enter new spin_speed:"; cin >> spin_speed;
			break;
		case 10:  // Change heating_temperature
			cout << "Enter new heating_temperature:"; cin >> heating_temperature;
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