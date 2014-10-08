//============================================================================
// Name        : Debug.cpp
// Author      : Agostino Mascitti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Questo codice stampa "Linea eseguita" tante volte quanto l'utente digita in console finchè non scrive "0".

//============================================================================

#include <iostream>
using namespace std;

void scriviLineaEseguita(int nrip) {
	//Quando non ne puoi più premi "Step return"
	for(int i = 0; i < nrip; i++)
		cout << "Linea eseguita" << endl;
}

int main() {

	int numeroRipetizioni; // Premi "step over"! =)

	while(true) { //ciclo infinito. Sarà fermato da if
		cout << "Quante volte devo scrivere \"Linea eseguita\"? ";
		cin >> numeroRipetizioni;
		if(numeroRipetizioni == 0)
			break; //esco dal while infinito
		scriviLineaEseguita(numeroRipetizioni); //Premi "Step into" per vedere che succede dentro scriviLineaEseguita() o "Step Over" per saltare alla prossima istruzione!
	}

	cout << "Ciclo finito" << endl;
	return 0;
}
