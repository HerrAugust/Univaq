//============================================================================
// Name : Consegna1-array.cpp
// Author : Agostino Mascitti
// Email : agostino_aless@yahoo.it
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedere all’utente 8 numeri interi e 8 numeri interi (due array). Stampare a video la sottrazione del primo meno il secondo.
// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
//============================================================================

#include <iostream>
using namespace std;

int main() {
  
  //chiedo due array da 8 interi
  int num1[8], num2[8];
  for(int i = 0; i < 8; i++) {
    cout << "Inserire un intero per num1[8]: ";
    cin >> num1[i];
    cout << endl;
  }
  
  for(int i = 0; i < 8; i++) {
    cout << "Inserire un intero per num2[8]: ";
    cin >> num2[i];
    cout << endl;
  }
  
  //Stampo la differenza num1[i] - num2[i]
  for(int i = 0; i < 8; i++)
    cout << num1[i] << " - " << num2[i] << " = " << num[i] - num[2] << endl;
  
  return 0;
}
