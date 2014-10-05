//============================================================================
// Name        : Consegna2-cicliforewhile-cmath.cpp
// Author      : Agostino Mascitti
// Email       : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Dati gli array a[]={3, 4, 5} e b[] con tre naturali decisi dall’utente, stampare a video la potenza b[i]-esima di a[i].


// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.

//============================================================================

using namespace std;
#include <iostream>
#include <cmath> //necessario per pow(int base, int esponente)

int main() {
	int a[] = {3,4,5};
	int b[3];

	//Riempio b[3]
	for(int varScorr = 0; varScorr < 3; varScorr++) {
		cout << "Inserire l'intero numero " << varScorr+1 << ": ";
		cin >> b[varScorr];
	}

	//Stampo a video la potenza b[i]-esima di a[i], usando la funzione standard pow()
	for(int varScorr = 0; varScorr < 3; varScorr++) {
		cout << a[varScorr] << "^" << b[varScorr] << " = " << pow(a[varScorr], b[varScorr]) << endl; //vedere il file alternativa nella cartella corrente!!
	}

	return 0;
}
