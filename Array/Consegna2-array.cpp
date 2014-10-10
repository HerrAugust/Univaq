//============================================================================
// Name : Consegna1-array.cpp
// Author : Agostino Mascitti
// Email : agostino_aless@yahoo.it
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedi all’utente 5 numeri e stampali a video moltiplicati per 3
// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
//============================================================================

#include <iostream>
using namespace std;

int main() {
  
  //Chiedo 5 numeri e li salvo in un array
  int num[5];
  cout << "Scrivi i numeri (5): " << endl;
  cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
  
  cout << endl;
  cout << num[0] << " * 3 = " << num[0] * 3 << endl;
  cout << num[1] << " * 3 = " << num[1] * 3 << endl;
  cout << num[2] << " * 3 = " << num[2] * 3 << endl;
  cout << num[3] << " * 3 = " << num[3] * 3 << endl;
  cout << num[4] << " * 3 = " << num[4] * 3 << endl;
  
  return 0;
}
