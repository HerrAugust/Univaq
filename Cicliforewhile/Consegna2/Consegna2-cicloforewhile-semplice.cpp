//============================================================================
// Name        : Consegna2-cicliforewhile.cpp
// Author      : Agostino Mascitti
// Email       : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Dati gli array a[]={3, 4, 5} e b[] con tre naturali decisi dall’utente, stampare a video la potenza b[i]-esima di a[i].


// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
// Nota: Se ti senti spiazzato da tutte queste linee di codice, vedi Consegna2-cicliforewhile-semplice.cpp!
//============================================================================

using namespace std;
#include <iostream>
//Anzichè cmath.h usiamo una nostra funzione (per approfondire i cicli)!! =) Vedere l'alternativa nella cartella corrente.

//Calcola base^potenza. Per esempio 2^3 restituisce 8. Non vengono stampati a video i passaggi della funzione.
int myPotenza(int base, int esponente) {
	//Questa funzione funziona solo per esponenti positivi
	if(esponente <= 0)
		return 1;

	int risultato = 0;
	for(int i = 1; i <= esponente; i++) { //notare <=. Prova a lanciare il codice per capire! ;) Parentesi {} non necessarie!
		risultato = base * base;
	}

	return risultato;

}

int main() {
	int a[] = {3,4,5};
	int b[3];

	//Riempio b[3]
	for(int i = 0; i < 3; i++) {
		cout << "Inserire l'intero numero " << i+1 << ": ";
		cin >> b[i];
	}

	//Stampo a video la potenza b[i]-esima di a[i], usando la funzione standard pow()
	for(int i = 0; i < 3; i++) {
		cout << "Risultato: " << a[i] << "^" << b[i] << " = " << myPotenza(a[i], b[i]) << endl; //vedere il file alternativa nella cartella corrente!!
	}

	return 0;
}
