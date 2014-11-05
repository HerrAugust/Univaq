/*
 * Trasformare in ricorsivo: Chiedere all’utente 18 elementi. Trovare maggiore e minore e stampare a video.
 * Author: Agostino
 * Esercizio: ricorsione1.cpp
 * Nota: in questo esercizio si usa il C++ solo per le funzioni cin e cout. Questo implica la compilazione di un programma C++.
*/

#include <iostream>

using namespace std;

void versioneRicorsiva() {
  
}

void versioneIterativa() {
  int a[18];
  
  for(int i = 0; i < 18; i++) {
    cout << "Inserisci un numero intero: " << endl;
    cin >> a[i];
  }
    
  int minore = numeri[0];
  int maggiore = numeri[0];
  for(int varScorr = 0; varScorr < 18; varScorr++) {
    if(numeri[varScorr] < minore)
    minore = numeri[varScorr];
    if(numeri[varScorr] > maggiore)
    maggiore = numeri[varScorr];
  }
  
}

int main(void) {

  versioneIterativa();
  
  int a[18];
  versioneRicorsiva(a);

  return 0;
}
