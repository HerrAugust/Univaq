//============================================================================
// Name        : For.cpp
// Author      : Agostino Mascitti
// Email	   : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * Chiedo all’utente il valore di n e m.
 * Chiedo i n numeri.
 * Stampo gli n numeri moltiplicati per m.
 */
int main() {

	//Chiedo all’utente il valore di n e m.
	int m, n;
	cout << "Inserire m e n: ";
	cin >> m >> n;

	//chiedo gli n numeri
	int num[n];
	for(int varScorrArray = 0; varScorrArray < n; varScorrArray++) {
		cout << "Inserire il valore " << varScorrArray+1 << ": "  <<endl;
		cin >> num[varScorrArray];
	}

	//Stampo gli n numeri moltiplicati per m.
	for(int varScorrArray = 0; varScorrArray < n; varScorrArray++) {
		cout << num[varScorrArray] << "*" << m << " = " << num[varScorrArray]*m << endl;
	}

	return 0;
}
