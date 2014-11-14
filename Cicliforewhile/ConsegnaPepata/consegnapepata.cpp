/*
 * Risolvere una equazione di secondo grado.
 * Facciamo le cose semplici: a,b,c sono assicurati essere numeri e ci sono tutti e tre.
 */
#include <iostream> //cin, cout
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h> //sqrt

using namespace std;

int main () {

	char equazione[20];
	cout << "Inserisci la tua equazione di secondo grado in forma ax^2+bx+c=0: " << endl;
	cin >> equazione;

	//Recupero a,b,c
	int i, abc[3], contABC, contCoeff = 0;
	char coeff[3+1]; //+1 per \0, richiesto da atoi()
	for(i = 0, contABC = 0;; i++)
		if(equazione[i] == 'x') {
			coeff[contCoeff] = '\0';
			abc[contABC] = atoi(coeff); //abc[] contiene i coefficienti
			contABC++;
			contCoeff = 0; //il prossimo coefficiente deve sovrascrivere il precedente

			if(contABC == 1) //ho appena preso a e devo saltare ^2+ (tre caratteri)
				i += 3;

		}
		else {
			//Per non rischiare di perdere a = 55, per esempio, devo fare:
			coeff[contCoeff] = equazione[i];
			contCoeff++;

			if(equazione[i+1] == '=') {
				coeff[contCoeff] = '\0';
				abc[contABC] = atoi(coeff);
				break;
			}

		}
	//END recupero a,b,c

	//Applichiamo la formula di risoluzione
	double delta = abc[1]*abc[1]-4*abc[0]*abc[2];
	if(delta < 0) cout << "Delta minore di 0: nessuna soluzione reale." << endl;
	else {
		double radDelta = sqrt(delta);

		cout << "Soluzione 1: " << (-abc[1] + radDelta) / 4*abc[0] << endl;
		cout << "Soluzione 2: " << (-abc[1] - radDelta) / 4*abc[0] << endl;
	}

	return 0;
}
