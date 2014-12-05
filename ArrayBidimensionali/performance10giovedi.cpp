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
 * Consegna: C’è un calciatore che ha performance 10 di giovedì?
 * Algoritmo: Questo problema si inserisce nel più grande insieme di problemi
 * per ogni/esiste: esiste un giocatore che ha performance uguale a 10 di giovedì?
 * Appena lo troviamo sappiamo che esiste e quindi lo diamo in output, risparmiando
 * al computer di scorrere il resto dell’array (è un problema se è molto lungo!)
 * sapendo già la risposta finale.
 * Bisognerà scorrere l’array solo nelle righe e, accedendo alla posizione del
 * giovedì (terza posizione), vedere se la prestazione è 10. Appena trovata lo
 * facciamo presente in output.
 */


int main(void) {
	int ncalciatori = 3; //rappresenta le righe di performance[]
	//performance di 3 calciatori in 7 giorni
	int performance[3][7] = {
			{10, 9, 8, 7, 6, 5, 4},
			{1, 2, 3, 10, 5, 6, 7},
			{6, 4, 10, 0, 1, 4, 8}
	};

	int i;
	int esiste = 0;
	for(i = 0; i < ncalciatori && esiste == 0; i++)
		if(performance[i][3] == 10)
			esiste = 1;

	if(esiste == 0)
		cout << "Non esiste un calciatore con performance 10 di giovedi'" << endl;
	else
		cout << "Esiste un calciatore con performance 10 di giovedi'" << endl;
	return 0;
}
