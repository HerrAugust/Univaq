//============================================================================
// Name : Consegna1-cicliforewhile.cpp
// Author : Agostino Mascitti
// Email : agostino_aless@yahoo.it
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedere il valore di n all’utente. Chiedere 20 interi all’utente e stamparne il moltiplicato per n.
// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
//============================================================================

#include <iostream>
using namespace std;

int main() {
  
  //Chiedo n
  int n = 0;
  cout << "n = ";
  cin >> n;
  
  //Chiedo 20 interi all'utente
  int num[20];
  for (int i = 0; i < 20; i++) {
    cout << "Valore " << i+1 << " di 20: ";
    cin >> num[i];
  }
  
  for(int i = 0; i < 20; i++)
    cout << num[i] << " * " << n << " = " << num[i]*n << endl;
  
  return 0;
}
