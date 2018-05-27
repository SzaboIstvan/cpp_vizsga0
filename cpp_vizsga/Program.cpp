#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Casette.h"
#include "CD.h"
#include "DVD.h"
#include "MiniDV.h"
#include "VHS.h"
#include "Program.h"
#pragma warning(disable : 4996) //getch

using namespace std;

const int MAX = 5;
int counter = 0;

Recorder* recorders[MAX];

void NewRecord() {
	if (counter < MAX)
	{
		cout << endl << "*** Bevitel ***" << endl;
		cout << "1. CD" << endl;
		cout << "2. DVD" << endl;
		cout << "3. Casette" << endl;
		cout << "4. VHS" << endl;
		cout << "5. MiniDV" << endl;
		char c = getch();
		char* type = new char[10];
		char* name = new char[40];
		switch (c)
		{
		case '1':
			type = "CD";
			cout << endl << "Nev: ";
			cin >> name;
			int capacity;
			cout << endl << "Capacity:";
			cin >> capacity;

			CD* cd = new CD();
			recorders[counter] = cd;
			recorders[counter]->Input(type, name, capacity); //too many args, only recorder ctor available
			counter++;
			break;
		case '2':
			type = "DVD";
			cout << endl << "Nev: ";
			cin >> name;
			int cap;
			cout << endl << "Capacity:";
			cin >> cap;
			int pagesNum;
			cout << endl << "Pages number:";
			cin >> pagesNum;

			DVD* dvd = new DVD();
			recorders[counter] = dvd;
			recorders[counter]->Input(type, name, capacity, pagesNum); //too many args, only recorder ctor available
			counter++;
			break;
		case '3':
			type = "Casette";
			cout << endl << "Nev: ";
			break;
		case '4':
			type = "VHS";
			cout << endl << "Nev: ";
			break;
		case '5':
			type = "MiniDV";
			cout << endl << "Nev: ";
			break;
		default:
			break;
		}

		delete[] type;
		delete[] name;
	}
}

void PrintAlbums() {
	for (size_t i = 0; i < counter; i++)
	{
		recorders[i]->Print();
		cout << endl;
	}
}

void Search() {

}

void Exit() {
	for (size_t i = 0; i < counter; i++)
	{
		delete recorders[i];
	}
}

int main() {
	bool exit = false;
	do
	{
		cout << "*** Menu ***" << endl;
		cout << "1.Bevitel" << endl;
		cout << "2.Lista" << endl;
		cout << "3.Kereses" << endl;
		cout << "4.Kilepes" << endl;
		char c = getch();
		switch (c)
		{
		case '1':
			NewRecord();
			break;
		case '2':
			PrintAlbums();
			break;
		case '3':
			Search();
			break;
		case '4':
			Exit();
			break;
		default:
			break;
		}

	} while (!exit);
	return 0;
}
