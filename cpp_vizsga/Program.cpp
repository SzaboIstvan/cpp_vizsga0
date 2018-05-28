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
		char type[10];
		char name[40];

		switch (c)
		{
		case '1': {
			strcpy(type, "CD");
			cout << endl << "Name: ";
			cin >> name;
			int capacity;
			cout << endl << "Capacity: ";
			cin >> capacity;

			CD* cd = new CD(type, name, capacity);
			recorders[counter] = cd;
			counter++;
			break;
		}
		case '2': {
			strcpy(type, "DVD");
			cout << endl << "Name: ";
			cin >> name;
			int capacity;
			cout << endl << "Capacity: ";
			cin >> capacity;
			int pagesNum;
			cout << endl << "Pages number: ";
			cin >> pagesNum;

			DVD* dvd = new DVD(type, name, capacity, pagesNum);
			recorders[counter] = dvd;
			counter++;
			break;
		}
		case '3': {
			strcpy(type, "Casette");
			cout << endl << "Name: ";
			cin >> name;
			int length;
			cout << endl << "Length: ";
			cin >> length;

			Casette* c = new Casette(type, name, length);
			recorders[counter] = c;
			counter++;
			break;
		}
		case '4': {
			strcpy(type, "VHS");
			cout << endl << "Name: ";
			cin >> name;
			int length;
			cout << endl << "Length: ";
			cin >> length;
			int mode;
			cout << endl << "Mode: ";
			cin >> mode;

			VHS* vhs = new VHS(type, name, length, mode);
			recorders[counter] = vhs;
			counter++;
			break;
		}
		case '5': {
			strcpy(type, "MiniDV");
			cout << endl << "Name: ";
			cin >> name;
			int length;
			cout << endl << "Length: ";
			cin >> length;
			int mode;
			cout << endl << "Mode: ";
			cin >> mode;
			int memory;
			cout << endl << "Memory: ";
			cin >> memory;

			MiniDV* m = new MiniDV(type, name, length, mode, memory);
			recorders[counter] = m;
			counter++;
			break;
		}
		default:
			break;
		}
	}
	else
	{
		cout << "Array is FULL.";
	}
}

void PrintAlbums() {
	for (size_t i = 0; i < counter; ++i)
	{
		recorders[i]->Print();
		cout << endl;
	}
}

void Search() {
	if (counter == 0)
	{
		cout << "Empty list" << endl;
		return;
	}

	char name[40];
	cout << endl << "Name :";
	cin >> name;
	for (size_t i = 0; i < counter; ++i)
	{
		int c = 0;
		auto akt = recorders[i]->GetName();
		while ((name[c] == akt[c]) && (akt[c] != '\0'))
		{
			c++;
		}

		if ((name[c] == akt[c]) && (akt[c] == '\0'))
		{
			recorders[i]->Print();
			return;
		}
	}
}

void Exit() {
	for (size_t i = 0; i < counter; ++i)
	{
		delete recorders[i];
	}
}

int main() {
	bool exit = false;
	do
	{
		cout << endl << "*** Menu ***" << endl;
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
