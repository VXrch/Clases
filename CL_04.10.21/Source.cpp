#include <iostream>
#include <conio.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Enter_your_line(char *arr, int Size) {

	char ch = ' ';

	//cin.ignore();

	cin.getline(arr, Size);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Print_line(char arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

bool IsTheSame(char arr[], char arr2[], int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr[i]){
			return false;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct Movie
{
	int Id;
	float price;
	float rating;

	char name[50];
	int name_Movie;

	char director[20];
	int director_;

	char genre[20];
	int genre_;
};

bool IsUnick(Movie* arr, int size) {

	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i].Id == arr[j].Id)
			{
				return false;
			}
		}
	}

	return true;
}

int SetId(Movie* arr, int size) {

	bool correct_id;

	int temp_Id = size;
	
	do
	{
		correct_id = IsUnick(arr, size);

		if (correct_id == false)
		{
			temp_Id++;
		}

	} while (correct_id == false);

	return temp_Id;
}

int FindById(Movie* arr, int size) {

	int temp_id;

	cout << "Enter id: "; cin >> temp_id;

	for (int i = 0; i < size; i++)
	{
		if (arr[i].Id == temp_id)
		{
			return i;
		}
	}

	cout << "Id is not found!" << endl;

	return -1;
}

void Fill(Movie &m, Movie *arr, int size) {

	cout << "_--_-__-_--_-__-_--_-_--_-__-_--_-__-_--_" << endl;
	cin.ignore();

	cout << "Enter name: "; Enter_your_line(m.name, 50);
	cout << "Enter director: "; Enter_your_line(m.director, 20);
	cout << "Enter genre: "; Enter_your_line(m.genre, 20);

	cout << "Enter rating: "; cin >> m.rating;
	cout << "Enter price: "; cin >> m.price;

	m.Id = SetId(arr, size);
}

void Print(Movie m) {

	cout << "_--_-__-_--_-__-_--_-_--_-__-_--_-__-_--_" << endl << endl;

	cout << "Id: " << m.Id << endl;

	cout << "Name: "; Print_line(m.name, 50);
	cout << "Director: "; Print_line(m.director, 20);
	cout << "Genre: "; Print_line(m.genre, 20);

	cout << "Rating: " << m.rating << endl;
	cout << "Price: " << m.price << endl;
}

void Change(Movie &m) {

	int choice;

	cout << "_--_-__-_--_-__-_--_-_--_-__-_--_-__-_--_" << endl;

	cout << "Enter what to change:\n[1] - name\n[2] - director\n[3] - genre\n[4] - rating\n[5] - price" << endl;
	cout << "___--- "; cin >> choice;

	switch (choice)
	{
	case 1: // Change name
		cout << "Enter new name:"; Enter_your_line(m.name, 50);
		break;
	case 2:  // Change director
		cout << "Enter new director:"; Enter_your_line(m.director, 20);
		break;
	case 3:  // Change genre
		cout << "Enter new genre:"; Enter_your_line(m.genre, 20);
		break;
	case 4:  // Change rating
		cout << "Enter new rating:"; cin >> m.rating;
		break;
	case 5:  // Change price
		cout << "Enter new price:"; cin >> m.price;
		break;
	default: cout << "Wrong choice!" << endl; break;
	}
}

void AddNewMovie(Movie*& arr, int& size) {

	Movie* temp = new Movie[size + 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	Fill(temp[size], arr, size);

	delete[]arr;
	arr = temp;
	size++;
}

void DeleteMovie(Movie*& arr, int& size) {

	int iter = FindById(arr, size);

	if (iter == -1)
		return;

	Movie* temp = new Movie[size - 1];

	for (int i = 0; i < size; i++)
	{
		if (i != iter) {
			temp[i] = arr[i];
		}
	}

	delete[]arr;
	arr = temp;
	size--;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FindBy_price(Movie* arr, int size){

	float temp;

	cout << "Enter price to search (234 or 38.5): "; cin >> temp;

	for (int i = 0; i < size; i++)
	{
		if (arr[i].price == temp) {
			Print(arr[i]);
		}
	}
}
void FindBy_rating(Movie* arr, int size){

	float temp;

	cout << "Enter rating to search (1.4 or 4.8): "; cin >> temp;

	for (int i = 0; i < size; i++)
	{
		if (arr[i].rating == temp) {
			Print(arr[i]);
		}
	}
}
void FindBy_name(Movie* arr, int size) {

	char temp[50];
	bool the_same;

	cout << "Enter price to search (234 or 38.5): "; Enter_your_line(temp, 50);

	for (int i = 0; i < size; i++)
	{
		the_same = IsTheSame(arr[i].name, temp, size);

		if (the_same == true){
			Print(arr[i]);
		}
	}

	delete[]temp;
}
void FindBy_director(Movie* arr, int size){

	char temp[50];
	bool the_same;

	cout << "Enter director to search: "; Enter_your_line(temp, 50);

	for (int i = 0; i < size; i++)
	{
		the_same = IsTheSame(arr[i].director, temp, size);

		if (the_same == true) {
			Print(arr[i]);
		}
	}

	delete[]temp;
}
void FindBy_genre(Movie* arr, int size){

	char temp[50];
	bool the_same;

	cout << "Enter genre to search (234 or 38.5): "; Enter_your_line(temp, 50);

	for (int i = 0; i < size; i++)
	{
		the_same = IsTheSame(arr[i].genre, temp, size);

		if (the_same == true) {
			Print(arr[i]);
		}
	}

	delete[]temp;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Print_all(Movie* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		Print(arr[i]);
	}
}

void Change_movie(Movie*& arr, int size) {

	int iter = FindById(arr, size);
	Change(arr[iter]);
}

void main() {

	int choice;
	bool isExit = false;

	int size = 0;
	Movie* store = new Movie[size];

	while (!isExit)
	{
		system("pause");
		system("cls");

		cout << "\\___---___/ MENU \\___---___/" << endl;
		cout << "[1] - Add movie" << endl;
		cout << "[2] - Delete movie" << endl;
		cout << "[3] - Change movie info" << endl;
		cout << "[4] - Print all movies" << endl;
		cout << endl;
		cout << "--_._-- FIND BY --_._--" << endl;
		cout << "[5] - Name" << endl;
		cout << "[6] - Director" << endl;
		cout << "[7] - Genre" << endl;
		cout << "[8] - Rating" << endl;
		cout << "[9] - Price" << endl;
		cout << endl;
		cout << "[0] - EXIT" << endl;
		cout << endl;
		cout << "(/'^,^)/' ~~~ "; cin >> choice;

		switch (choice)
		{
		case 0: // EXIT
			cout << "Bye-bye!" << endl;
			isExit = true;

		case 1: // Add movie
			AddNewMovie(store, size);
			break; 

		case 2: // Delete movie
			if (size > 0){
				DeleteMovie(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;

		case 3: // Change movie info
			if (size > 0) {
				Change_movie(store, size);
			}
			else {
				cout << "You can't change move! Movies list is empty!" << endl;
			}
			break;

		case 4: // Print all movies
			if (size > 0) {
				Print_all(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;

		case 5: // FIND BY Name
			if (size > 0) {
				FindBy_name(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;

		case 6: // FIND BY Director
			if (size > 0) {
				FindBy_director(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;
		
		case 7: // FIND BY Genre
			if (size > 0) {
				FindBy_genre(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;

		case 8: // FIND BY Rating
			if (size > 0) {
				FindBy_rating(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;
		
		case 9: // FIND BY Price
			if (size > 0) {
				FindBy_price(store, size);
			}
			else {
				cout << "You can't delete move! Movies list is empty!" << endl;
			}
			break;

		default: cout << "Wrong choice!" << endl; break;
		}
	}

	delete[]store;
}