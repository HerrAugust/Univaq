//============================================================================
// Name        : prove.cpp
// Author      : Agostino Mascitti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * Consegna: Chi è il migliore mediamente?
 * Algoritmo: Torniamo al problema dell’allenatore. Vogliamo capire quale calciatore
 * è stato mediamente il migliore. Ricordando che la media matematica delle
 * performance è data dalla somma di queste fratto i termini della somma,
 * dovremmo scorrere la riga di un calciatore, salvare la somma in una variabile e
 * dividere per 7 (giorni della settimana). Quindi passare al prossimo calciatore e
 * così via. Avremo quindi bisogno di un array di somme (una somma per ogni calciatore).
 * Poiché la divisione per due potrebbe dare luogo a un numero con virgola, somma[]
 * dovrà essere di tipo double.
 *
 */

int main(void) {

	int ncalciatori = 3; //rappresenta le righe di performance[]
	//performance di 3 calciatori in 7 giorni
	int performance[3][7] = {
	{10, 9, 8, 7, 6, 5, 4},
	{1, 2, 3, 10, 5, 6, 7},
	{6, 4, 10, 0, 1, 4, 8}
	};
	double somma[ncalciatori] = { 0.0, 0.0, 0.0 };

	//sommo le performance
	int i, j;
	for(i = 0; i < ncalciatori; i++) {
		for(j = 0; j < 7; j++) {
			somma[i] += performance[i][j];
		}
		//cambio di riga: vado alla successiva
	}

	//trovo le medie
	for(i = 0; i < ncalciatori; i++) {
		somma[i] = somma[i] / 7;
	}

	//trovo la media maggiore
	int posmax = 0;
	for(i = 1; i < ncalciatori; i++) {
		if(somma[i] > somma[posmax])
			posmax = i;
	}

	cout << "Il calciatore piu' performante e' in riga " << posmax << " e ha performance media = " << somma[posmax] << endl;

	return 0;
}
