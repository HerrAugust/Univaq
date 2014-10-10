//============================================================================
// Name : Consegna1-cicliforewhile.cpp
// Author : Agostino Mascitti
// Email : agostino_aless@yahoo.it
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Inventa 5 numeri e stampali a video moltiplicati per 3.
// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
//============================================================================

#include <iostream>
using namespace std;

int main() {

  //Invento 5 numeri e li memorizzo in un array
  int numeri[5] = { 4, 20, 1, 0 }; //nota: essendo l'inizializzazione contestuale alla dichiarazione di numeri[], avrei potuto scrivere semplicemente int numeri[5] = { 4, 20, 1, 0 };
  
  //Moltiplico i numeri per 3 e li stampo a video
  cout << numeri[0] << "*3 = " << numeri[0] * 3 << endl;
  cout << numeri[1] << "*3 = " << numeri[1] * 3 << endl;
  cout << numeri[2] << "*3 = " << numeri[2] * 3 << endl;
  cout << numeri[3] << "*3 = " << numeri[3] * 3 << endl;
  cout << numeri[4] << "*3 = " << numeri[4] * 3 << endl;
  
  /*
  * Cosa devi notare:
  * 1. sono partito da numeri[0] e non da numeri[1]
  * 2. sono arrivato fino a numeri[4] e non fino a numeri[5]
  */

  return 0;
}
