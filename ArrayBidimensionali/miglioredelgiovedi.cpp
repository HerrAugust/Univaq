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
 * Consegna: Si scriva in output chi è il miglior calciatore del giovedì
 * (terza posizione).
 *
 * Algoritmo: Sempre sul problema dell’allenatore, se questi volesse sapere chi
 * è il migliore del giovedì dovremo scorrere l’array bidimensionale, in cui sono
 * salvate le performance dei calciatori in una settimana, soltanto nelle righe:
 * la colonna rimane sempre la stessa e cioè quella del giovedì (terza colonna).
 */

int main(void) {
	int ncalciatori = 3; //rappresenta le righe di performance[]
	//performance di 3 calciatori in 7 giorni
	int performance[3][7] = {
			{10, 9, 8, 7, 6, 5, 4},
			{1, 2, 3, 4, 5, 6, 7},
			{6, 4, 10, 9, 1, 4, 8}
	};

	int i;
	int calciatoremigliore = 0;
	for(i = 1; i < ncalciatori; i++) //i = 1 perchè assumo che il calciatore migliore sia il primo => i = 0 è un confronto inutile
		if(performance[i][3] > performance[calciatoremigliore][3])
			calciatoremigliore = i;

	cout << "Il calciatore migliore del giovedi' e' quello con indice di riga " << calciatoremigliore + 1 << endl;
	return 0;
}
