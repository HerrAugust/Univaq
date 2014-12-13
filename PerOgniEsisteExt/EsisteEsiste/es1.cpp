/*
 * Consegna: dato un array bidimensionale con 2 righe e c colonne, dire se esiste
 * un numero n della prima riga tale che esiste un altro numero in posizione
 * array[0][col], per col che va da 0 a c, che elevato a array[1][col] dia
 * proprio n.
 * ALG: scorrola prima riga. Appena trovo un numero che soddisfa la consegna
 * scorrendo la prima riga (di nuovo) restituisco. La cosa importante con questo
 * tipo di problemi è non scorrere ancora quando si verifica la condizione cercata
 * (quando trovo un altro numero che soddisfa la consegna non devo andare avanti)!
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int c = 5;
	int num[2][5] = {
			{ 1000, 2, 10, 7, 9 },
			{ 11, 2, 3, 4, 5 }
	};

	int pos = -1;
	for(int col = 0; col < c; col++) {
		for(int col1 = 0; col1 < c; col1++) {
			if(num[0][col] == pow(num[0][col1], num[1][col1])) {
				pos = col;
				col1 = c;
				col = c;
			}
		}
	}

	if(pos == -1)
		cout << "Non esiste il numero che cerchi";
	else
		cout << "Il numero che cerchi e' " << num[0][pos];

	return 0;
}
