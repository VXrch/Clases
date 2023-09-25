#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void Column(string text1, string text2, string text3, string text4, string text5);
void Table(string text1, string text2, string text3, string text4, string text5);
void Enter(int number, string text_to_add = " ");
void AnyLine(int symbhol, int iter = 1);
void SetColor(int color);
void Bottom(int cols);
void Top();


void main() {

	Top();
	Table("1", "P196", "Samsung Color TV", "1", "$ 829.00");
	Table("2", "P020", "Uniden Handset", "1", "$ 29.00");
	Table("3", "P196", "Folder Blank", "1", "$ 2.70");
	Bottom(3);
}


void Table(string text1, string text2, string text3, string text4, string text5) {

	AnyLine(195); AnyLine(196, 3); AnyLine(197); AnyLine(196, 6); AnyLine(197); AnyLine(196, 18); AnyLine(197); AnyLine(196, 12); AnyLine(197); AnyLine(196, 12); AnyLine(180);
	cout << endl;

	Column(text1, text2, text3, text4, text5);
}

void Top() {
	AnyLine(218); AnyLine(196, 3); AnyLine(194); AnyLine(196, 6); AnyLine(194); AnyLine(196, 18); AnyLine(194); AnyLine(196, 12); AnyLine(194); AnyLine(196, 12); AnyLine(191);
	cout << endl;

	string text1 = "No";
	string text2 = "Item";
	string text3 = "Description";
	string text4 = "Quality";
	string text5 = "Price";

	Column(text1, text2, text3, text4, text5);
}

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void AnyLine(int symbhol, int iter) {

	for (int i = 0; i < iter; i++)
	{
		cout << (char)symbhol;
	}
}

void Enter(int number, string text_to_add) {
	cout << setw(number - 1) << text_to_add << " ";
}

void Column(string text1, string text2, string text3, string text4, string text5) {
	AnyLine(179); Enter(3, text1); AnyLine(179); Enter(6, text2); AnyLine(179); Enter(18, text3); AnyLine(179); Enter(12, text4); AnyLine(179); Enter(12, text5); AnyLine(179);
	cout << endl;
}

void Bottom(int cols) {

	for (int i = 0; i < cols; i++)
	{
		Column("", "", "", "", "");
	}
	AnyLine(192); AnyLine(196, 3); AnyLine(193); AnyLine(196, 6); AnyLine(193); AnyLine(196, 18); AnyLine(193); AnyLine(196, 12); AnyLine(193); AnyLine(196, 12); AnyLine(217);
	cout << endl;
}