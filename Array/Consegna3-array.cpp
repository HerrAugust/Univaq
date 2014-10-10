//============================================================================
// Name : Consegna1-array.cpp
// Author : Agostino Mascitti
// Email : agostino_aless@yahoo.it
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedi all’utente 5 numeri e stampa a video il moltiplicato per il numero precedente (per n = 1 stampa il valore stesso)
// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
//============================================================================


//Prerequito addizionale: if-else

#include <iostream>
using namespace std;

int main() {
  
  //Chiedo 5 numeri e li memorizzo in un array
  int num[5];
  cout << "Inserisci 5 numeri: " << endl;
  cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
  
  //Stampo come in consegna (vedi sopra)
  cout << endl;
  cout << num[0] << endl; //Perchè non posso trattare num[0] come tutti gli altri elementi dell'array?
  cout << num[0] * num[1] << endl;
  cout << num[1] * num[2] << endl;
  cout << num[2] * num[3] << endl;
  cout << num[3] * num[4] << endl;
  //Perchè non posso stampare num[4] * num[5]?
  
  return 0;
}
