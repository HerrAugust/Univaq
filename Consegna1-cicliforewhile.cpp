//============================================================================
// Name        : Consegna1-cicliforewhile.cpp
// Author      : Agostino Mascitti
// Email	   : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedere all’utente 18 elementi. Trovare maggiore e minore e stampare a video.

// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.

//============================================================================

#include <iostream>
using namespace std;

int main() {

	//Chiedo i 18 elementi e li memorizzo in un array
	int numeri[18];
	for(int varScorr = 0; varScorr < 18; varScorr++)
	{
		cout << "Inserire intero numero " << varScorr+1 << ": ";
		cin >> numeri[varScorr];
	}

	//Estendo l'algoritmo del video per trovare il maggiore (per il minire è lo stesso)
	int minore = numeri[0];
	int maggiore = numeri[0];
	for(int varScorr = 0; varScorr < 18; varScorr++) {
		if(numeri[varScorr] < minore)
			minore = numeri[varScorr];
		if(numeri[varScorr] > maggiore)
			maggiore = numeri[varScorr];
	}

	cout << "Il maggiore e' " << maggiore << "; il minore e' " << minore;

	return 0;
}
