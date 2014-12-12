/*
 * Consegna: Dato un array bidimensionale dire se esiste una multipla di tutte le altre.
 * Una riga (a,b,c,...) è multipla di un'altra (d,e,f,...) se (d,e,f,...) = (k*a,k*b,k*c,...)
 * per una qualche k intera.
 * ALG: Scorriamo una riga per volta e confrontiamo con le successive soltanto (infatti
 * le precedenti e la corrente riga sono state confrontate con le precedenti).
 * Appena trovata una riga multipla di tutte le altre restituiamo.
 * Notare che se (d,e,f,...) è multipla di (a,b,c,...) allora, così come per numeri
 * interi (ma stavolta per ogni elemento della riga), si ha che per ogni colonna c
 * array[0][c]%array[1][c] = 0 (negli interi corrisposte a:
 * t multiplo di s se t = s*p, con p intero, e cioè se t/s=p...e poichè p intero non avrà
 * decimali e quindi se t%s=0) :D
 */

#include <iostream>
using namespace std;

int main(void) {
	int righe = 4, colonne = 5, trovato = 0;
	/*nota: devo inizializzare necessariamente senza usare righe e colonne perchè non
	avrebbe senso scrivere array[righe][colonne], con righe e colonne variabile e
	poi inizializzare con un numero fisso di righe e colonne!*/
	int array[4][5] = {
			{ 10, 2, 4, 5, 1 },
			{ 5, 5, 5, 5, 5 },
			{ 1, 1, 1, 1, 1 },
			{ 200, 300, 400, 100, 200 }//ultima riga multiplo e in ultima posizione
	};

	for(int r = 0; r < righe; r++) { //esamino una riga
		for(int rsucc = 0; rsucc < righe; rsucc++) { //esamino la riga successiva alla corrente
			if(rsucc == r)
				continue;

			for(int col = 0; col < colonne; col++) { //scorro le tutte colonne
				if(array[r][col] % array[rsucc][col] != 0) {//r è multipla di rsucc in una stessa colonna
					cout << "La riga " << r << " non è multipla di " << rsucc << endl;
					//a questo punto non ha più senso visitare le altre righe: passo alla r dopo, cioè al ciclo più esterno
					rsucc = righe;
					col = colonne;
				}

				//ho scorso tutte le righe e le colonne, trovando una riga multipla di tutte le altre. Con rsucc+1 == r contemplo il caso dell'esempio
				if(col + 1 == colonne && (rsucc + 1 == righe || rsucc+1 == r )) {
					trovato = 1;
					cout << "Ho trovato che " << r << " e' la riga multipla di tutte le altre! :D" << endl;
					//non ha più senso cercare altre righe multiple di tutte le altre: esco
					r = righe;
					rsucc = righe;
				}
			}
		}
	}

	if(trovato == 0)
		cout << "Non esiste riga multipla di ogni altra";

	return 0;
}
