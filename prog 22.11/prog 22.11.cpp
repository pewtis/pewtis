// prog 22.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;



void drukujBinarnie(int liczba) {
	int bity[32];
	for (int i = 31; i >= 0; i--) {
		//int cos = liczba & 1;
		bity[i] = liczba & 1;
		liczba >>= 1;
	}
	for (int j = 0; j <= 31; j++) {
		cout << bity[j];
	}
	cout << endl;
}

void zapalBit(unsigned int liczba1, int n) {
	cout << liczba1 << endl;
	drukujBinarnie(liczba1);
	int jeden = 1;
	int przesun = jeden <<= n;
	int poZapaleniu = liczba1 ^ przesun;
	cout << (poZapaleniu) << endl;
	drukujBinarnie(poZapaleniu);
	cout << (liczba1 ^ (poZapaleniu)) << endl;
	drukujBinarnie(liczba1 ^ (poZapaleniu));
}



int main()
{
	//int *wsk = nullptr;
	//int a = 458;

	//wsk = &a;

	//cout << wsk << endl;
	//cout << *wsk << endl;
	//int tab[] = { 1,4,7,8,9 };
	//cout << tab << endl;
	//cout << *tab << endl;
	//wsk = tab; // wsk = &tab[0]
	//cout << *(wsk + 2) << endl;

	int liczba1, n;
	cout << "Podaj liczby: " << endl << "Liczba: ";
	cin >> liczba1;
	cout << "n: ";
	cin >> n;
	zapalBit(liczba1, n);
	system("pause");
}

