//============================================================================
// Name        : While1.cpp
// Author      : Agostino Mascitti
// Email	   : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//Chiedo 12 elem. e li mem. in un array
	int num[12];
	int varScorrArray = 0;
	while(varScorrArray < 12) { //12
		cout << "Inserire elemento numero " << varScorrArray+1 << ": " << endl;
		cin >> num[varScorrArray];
		varScorrArray++;
	}

	//il minimo vale num[0] e confronto minimo e num[n] in modo lineare
	int minimo = num[0];
	varScorrArray = 0;
	while(varScorrArray < 12) {
		if(num[varScorrArray] < minimo)
				minimo = num[varScorrArray];
		varScorrArray++;
	}

	//stampare a video il minimo
	cout << "Il minimo e' " << minimo;

	return 0;
}
