//============================================================================
// Name        : Consegna2-videoarray.cpp
// Author      : Agostino Mascitti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna    : Chiedere 3 elementi e stamparne il moltiplicato per 2
// Questo codice stampa "Linea eseguita" tante volte quanto l'utente digita in console finchè non scrive "0".

//============================================================================

#include <iostream>
using namespace std;

int main() {

	//Chidere 3 elementi
	int numeri[3];
	cout << "Inserire 3 elementi: " << endl;
	cin >> numeri[0] >> numeri[1] >> numeri[2];

	//stampare il loro moltiplicato per 2
	cout  << numeri[0] << " * 2 = " << numeri[0] * 2 << endl;
	cout  << numeri[1] << " * 2 = " << numeri[1] * 2 << endl;
	cout  << numeri[2] << " * 2 = " << numeri[2] * 2 << endl;

	return 0;
}
