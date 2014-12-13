/*
 * Consegna: Dati 5 numeri, determinare se esiste un numero tale che esiste un
 * numero tale che esistono due numeri consecutivi che concatenati fanno il
 * primo numero (per semplicità i due numeri vanno concatenati in ordine di posizione).
 * Ad esempio: 2, 3, 23, 9, 9. esiste 23 t.c. esistono 2 e 3 che concatenati danno 23.
 * ALG: scorro due volte l'array. Quando trovo che il numero è la contenazione
 * in ordine di posizione di due numeri consecutivi dell'array restituisco.
 */

#include <iostream>
using namespace std;

int numLength(int n) {
	int i = 10;
	while(n / i != 0)
		i *= 10;
	return i;
}

int concatena (int uno, int due) {
	return uno * numLength(due) + due;
}

int main(void) {
	int num[5] = { 2, 3, 23, 0, 2 };
	int pos = -1;

	for(int i = 0; i<5; i++) {
		for(int i1 = 0; i1 < 4; i1++) { //4 per via del i1+1 nell'if
			if(num[i] == concatena(num[i1], num[i1+1])) {
				pos = i;
				i1 = 4;
				i = 5;
			}
		}
	}

	if(pos == -1)
		cout << "Non ho trovato nulla";
	else
		cout << num[pos]; // 2

	return 0;
}
