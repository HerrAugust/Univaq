/*
 * Consegna: dato un array bidimensionale mxm dire se esiste una diagonale del sottoarray
 * bidimensionale di dimensione nxn (per n che va da 0 a m-1) la somma dei cui elementi è
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
			{ 20, 12, 3,  4,  0 },
			{ 2,  2,  2,  2,  2 },
			{ 10, 20, 20, 30, 40 },
			{ 6,  1,  0,  0,  100 },
			{ 5,  4,  3,  2,  90 }
	};

	//trova la somma degli elementi sulle varie diagonali
	int somme[m];
	for(int n = 0; n < m; n++) { //allargo l'area del sottoarray bidimensionale nxn
		somme[n] = 0;
		for(int r = 0, c = n; r <= n; r++, c--) { //vado avanti con le righe e indietro con le colonne
			somme[n] += array[r][c];
		}
		cout << "Somma sottoarray " << n+1 << "x" << n+1 << " = " << somme[n] << endl;
	}

	//adesso uso somme[] per verificare la consegna
	int posMaggiore = -1;
	for(int s1 = 0; s1 < m; s1++) {
		posMaggiore = s1;
		for(int s2 = 0; s2 < m; s2++) {
			if(somme[s1] < somme[s2]) {
				posMaggiore = -1;
				//non ha più senso controllare anche le altre diagonali
				s2 = m;
			}
			if(s2 == m-1) {
				s1 = m;
			}
		}
	}

	if(posMaggiore != -1)
		cout << "Esiste una diagonale maggiore in posizione: " << posMaggiore << " ed e' " << somme[posMaggiore];
	else
		cout << "Non esiste cio' che cerchi";

	return 0;
}
