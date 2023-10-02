#include <iostream>

using namespace std;

const int SIZE = 8;

struct Number {

	char l1, l2, l3, l4;
	int n1, n2, n3, n4;

	void Create() {

		cout << "Enter car number (2 letters, 4 numbers, 2 letters): " << endl;
		cin >> l1 >> l2 >> n1 >> n2 >> n3 >> n4 >> l3 >> l4;
	}
	
	void Fill() {

		cout << "Enter car number (2 letters, 4 numbers, 2 letters): " << endl;
		cin >> l1 >> l2 >> n1 >> n2 >> n3 >> n4 >> l3 >> l4;
	}

	void Print() {

		cout << "Number: " << endl;
		cout << l1 << l2 << n1 << n2 << n3 << n4 << l3 << l4 << endl;
	}
};

struct Machine
{
	string company;
	string model;
	string color;

	Number number;

	void Print(Machine examp) {

		cout << "company: " << examp.company;
		cout << "color: " << examp.color;
		cout << "model: " << examp.model;
		examp.number.Print();
	}

	Machine Create() {

		Machine temp;

		cout << "Enter company: "; cin >> temp.company;
		cout << "Enter color: "; cin >> temp.color;
		cout << "Enter model: "; cin >> temp.model;
		temp.number.Fill();

		return temp;
	}

	void Fill(Machine& temp) {

		cout << "Enter company: "; cin >> temp.company;
		cout << "Enter color: "; cin >> temp.color;
		cout << "Enter model: "; cin >> temp.model;
		temp.number.Fill();
	}

	void Change(Machine& examp) {

		int choice;

		cout << "Enter what to change:\n[1] - company\n[2] - color\n[3] - model\n[4] - number" << endl;
		cout << "___--- "; cin >> choice;

		switch (choice)
		{
		case 1: // Change company
			cout << "Enter new company:"; cin >> examp.company;
			break;
		case 2:  // Change color
			cout << "Enter new color:"; cin >> examp.color;
			break;
		case 3:  // Change model
			cout << "Enter new model:"; cin >> examp.model;
			break;
		case 4:  // Change number
			examp.number.Fill();
			break;
		default: cout << "Wrong choice!" << endl; break;
		}
	}

	int FindByNumber(Machine *arr) {

		int counter = -1;
		bool found = false;

		cout << "Enter machine number: "; 
		Number number;
		number.Create();

		for (int i = 0; i < SIZE; i++)
		{
			if (number.l1 == arr[i].number.l1 && number.l2 == arr[i].number.l2 && number.n1 == arr[i].number.n1 && number.n2 == arr[i].number.n2 && number.n3 == arr[i].number.n3 && number.n4 == arr[i].number.n4 && number.l3 == arr[i].number.l3 && number.l4 == arr[i].number.l4)
			{
				counter == i; found = true;
			}
		}

		if (found = false) {
			cout << "Number is non found!" << endl;
		}

		return counter;
	}
};


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