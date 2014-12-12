/*
 * Consegna: dato un array bidimensionale mxm dire se esiste una diagonale del sottoarray
 * bidimensionale di dimensiona nxn (per n che va da 1 a m-1) la somma dei cui elementi è
 * maggiore di quella degli elementi delle altre diagonali.
 * ALG: calcolare ogni volta la somma delle sottodiagonali è molto costoso (te ne accorgi
 * con le matrici molto molto grandi). Quindi l'idea, semplicissima, è memorizzare le
 * somme degli elementi delle varie diagonali in un array monodimensionale e
 * confrontare gli elementi di questo array.
 */

#include <iostream>
using namespace std;

int main(void) {
	int m = 5;
	int array[5][5] = {
			{ 20, 12, 3,  4,  6 },
			{ 2,  2,  2,  2,  2 },
			{ 10, 20, 20, 30, 40 },
			{ 6,  1,  0,  0,  100 },
			{ 5,  4,  3,  2,  90 }
	};

	int somme[5];
	for(int n = m; n >= 0; n--) {
		somme[n] = 0;
		for(int col = n; col >= 0; col--) { //TODO errore
			somme[n] += array[col][col];
		}
		cout << "somme["<< n << "] = " << somme[n] << endl;
	}

	int posMaggiore = -1, i;
	for(i = 0; i < m; i++) { //scorro somme[]
		posMaggiore = i;
		for(int j = 0; j < m; j++) { //scorro da capo somme[]
			//se una diagonale è maggiore non devo continuare
			if(somme[i] < somme[j]) {
				j = m;
			}

			if(j+1 == m)
				i = m;
		}
	}

	if(posMaggiore != m)
		cout << "Esiste una diagonale maggiore in posizione: " << posMaggiore;
	else
		cout << "Non esiste cio' che cerchi";

	return 0;
}
