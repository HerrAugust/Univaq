//============================================================================
// Name        : Consegna1-cicliforewhile.cpp
// Author      : Agostino Mascitti
// Email	   : agostino_aless@yahoo.it
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.

//============================================================================

#include <iostream>

using namespace std;

void consegna1() {
  	//Chiedo i 18 elementi e li memorizzo in un array
	int numeri[18];
	int varScorr = 0;
	while(varScorr < 18)
	{
		cout << "Inserire intero numero " << varScorr+1 << ": ";
		cin >> numeri[varScorr];
		varScorr++;
	}

	//Estendo l'algoritmo del video per trovare il maggiore (per il minire è lo stesso)
	int minore = numeri[0];
	int maggiore = numeri[0];
	varScorr = 0; //non posso ri-dichiarare varScorr perchè otterrei errore. varScorr, infatti, esiste già in memoria!
	for(varScorr < 18) {
		if(numeri[varScorr] < minore)
			minore = numeri[varScorr];
		if(numeri[varScorr] > maggiore)
			maggiore = numeri[varScorr];
		varScorr++
	}

	cout << "Il maggiore e' " << maggiore << "; il minore e' " << minore;
}

//Anzichè cmath.h usiamo una nostra funzione (per approfondire i cicli)!! =) myPotenza() va insieme con consegna2().
//Calcola base^potenza. Per esempio 2^3 restituisce 8. Non vengono stampati a video i passaggi della funzione.
int myPotenza(int base, int esponente) {
  //Questa funzione funziona solo per esponenti positivi
	if(esponente <= 0)
		return 1;

	int risultato = 0;
	int i = 1;
	while(i <= esponente) { //notare <=. Prova a lanciare il codice per capire! ;) Parentesi {} non necessarie!
	  if(risultato = 0)
		  risultato = base * base;
		else
		  risultato *= base;
		i++;
	}
	
	return risultato;
}

//Va preso insieme con myPotenza().
void consegna2() {
  int a[] = {3,4,5};
	int b[3];

	//Riempio b[3]
	int i = 0;
	while(i < 3) {
		cout << "Inserire l'intero numero " << i+1 << ": ";
		cin >> b[i];
		i++;
	}

	//Stampo a video la potenza b[i]-esima di a[i], usando la funzione standard pow()
	i = 0;
	while(i < 3) {
		cout << "Risultato: " << a[i] << "^" << b[i] << " = " << myPotenza(a[i], b[i]) << endl; //vedere il file alternativa nella cartella corrente!!
		i++;
	}
}

void consegna3() {
  
}


int main() {

  consegna1();
  consegna2(); //Viene cambiato solo il file in cui c'è myPotenza()
  consegna3();

  return 0;
}
