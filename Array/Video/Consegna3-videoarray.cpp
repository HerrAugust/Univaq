//============================================================================
// Name        : Consegna2-videoarray.cpp
// Author      : Agostino Mascitti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna    : Inventa 3 numeri e stampali per ciò che chiede l’utente
// Questo codice stampa "Linea eseguita" tante volte quanto l'utente digita in console finchè non scrive "0".

//============================================================================

#include <iostream>
using namespace std;

int main() {
	//invento 3 numeri e li memorizzo in un array
	int n[] = { 4, 6, -10 };

	//chiedo il moltiplicatore
	int moltiplicatore = 0;
	cout << "Inserisci il moltiplicatore " << endl;
	cin >> moltiplicatore;

	//stampo a video il loro moltiplicato
	cout << n[0] << " * " << moltiplicatore << " = " << n[0] * moltiplicatore << endl;
	cout << n[1] << " * " << moltiplicatore << " = " << n[1] * moltiplicatore << endl;
	cout << n[2] << " * " << moltiplicatore << " = " << n[2] * moltiplicatore << endl;

	return 0;
}
