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
	int numeri[8];
	for(int i = 0; i < 8; i++) //Se hai difficoltà leggi "i" come "varScorrArray"
	{
		cout << "Inserire il valore intero numero " << i+1 << ": " << endl;
		cin >> numeri[i];
	}

	//Determino se sono in ordine crescente, decrescente o meno
	int ordine = 0; //crescente 0, decrescente 1, altro 2
	int ordineCambiato = 0; //false, true
	for(int i = 1; i < 8; i++) { //accedere a numeri[0-1] non è corretto perchè non esiste
		if(numeri[i-1] > numeri[i]) { // 3 2 => decrescente
			if(ordineCambiato == 0) {
				ordine = 1;
				ordineCambiato = 1;
			}
			else { //anche in 8,7,6,5,4,3,2,1 l'ordine è decrescente già da i = 5!
				if(ordine != 1) {//se non siamo già tra decrescenti
					ordine = 2;
					break;
				}
			}
		}
		else if(numeri[i-1] == numeri[i]) //con due numeri uguali l'ordine non cambia!
			continue; //int numeri[8] = { 1,2,3,4,5,5,6,7 };
		else { //si vuole passare da decrescente a crescente di nuovo => ordine = altro
			if(ordineCambiato == 1) { //3 2 1
				ordine = 2;
				break;
			}

		}

	}

	//Stampo a video. Nota: anche "I numeri sono in ordine altro" è italiano! :P
	string ordineString = "crescente";
	if(ordine == 1)
		ordineString = "decrescente";
	if(ordine == 2) //non uso "else" perchè comunque dovrei mettere un if, ma sarebbe uguale
		ordineString = "altro";
	cout << "I numeri sono in ordine " << ordineString << endl;


	return 0;
}
