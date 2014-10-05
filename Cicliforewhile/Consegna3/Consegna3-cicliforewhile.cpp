// Author      : Agostino Mascitti
// email	   : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedere all’utente 8 elementi. Determinare se sono in ordine crescente (dal più piccolo al più grande), decrescente o meno.

// Nota: di fatto questo è codice C, ma bisogna incorporarlo in un progetto C++ per usare cout e cin! ;)

//============================================================================

#include <iostream>
#include <string> //userò una stringa
using namespace std;

int main() {

	//Chiedo 8 elementi e li memorizzo in un array.
	double numeri[8];
	for(int i = 0; i < 8; i++) //Se hai difficoltà leggi "i" come "varScorrArray"
	{
		cout << "Inserire il valore numero " << i+1 << ": ";
		cin >> numeri[i];
	}

	//1 2 3 4 5 6 7 8
	//Determino se sono in ordine crescente, decrescente o meno
	string ordine = ""; //crescente, decrescente, altro
	for(int i = 1; i < 8; i++) //vedi dopo per spiegazione :)
		if(numeri[i-1] < numeri[i])
			if(ordine.compare("")) {
				ordine = "crescente";
			}
			else {
				ordine = "altro";
				break; //consente di uscire immediatamente dal ciclo for
			}
		else {
			if(numeri[i-1] > numeri[i]) {
				if(ordine.compare("")) {
					ordine = "decrescente";
				}
				else {
					ordine = "altro";
					break;
				}
			}
		}


	//Stampo a video
	cout << "I numeri sono in ordine " << ordine << endl;
	//Anche "I numeri sono in ordine altro" è italiano! :P

	return 0;
}
