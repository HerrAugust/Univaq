/*
 * Trasformare in ricorsivo: Chiedere all’utente 18 elementi. Trovare maggiore e minore e stampare a video. Per semplicità, non trasformare il ciclo per riempire l'array in ricorsivo (altrimenti dovrei fare due funzioni ricorsive: una per il primo for e l'altra per il secondo for)!
 * Author: Agostino
 * Esercizio: ricorsione1.cpp
 * Nota: in questo esercizio si usa il C++ solo per le funzioni cin e cout. Questo implica la compilazione di un programma C++.
*/

#include <iostream>

using namespace std;

void versioneRicorsiva(int a[], int varScorr, int maggiore, int minore) {
  if(varScorr == 18) {
    cout << "il maggiore è " << maggiore << " e il minore " << minore << endl;
    return;
  }
  
  if(numeri[varScorr] < minore)
    minore = numeri[varScorr];
  if(numeri[varScorr] > maggiore)
    maggiore = numeri[varScorr];
  return versioneRicorsiva(a, varScorr+1, maggiore, minore);
}

void versioneIterativa() {
  int a[18];
  
  //Nota: questo ciclo non va trasformato in ricorsivo per consegna
  for(int i = 0; i < 18; i++) { 
    cout << "Inserisci un numero intero: " << endl;
    cin >> a[i];
  } 
    
  int minore = numeri[0];
  int maggiore = numeri[0];
  for(int varScorr = 0; varScorr < 18; varScorr++) { //Trasformo prima in while per essere facilitato
    if(numeri[varScorr] < minore)
      minore = numeri[varScorr];
    if(numeri[varScorr] > maggiore)
      maggiore = numeri[varScorr];
  } //nova iterazione => nuova chiamata ricorsiva
  
  cout << "il maggiore è " << maggiore << endl;
}

int main(void) {

  versioneIterativa();
  
  
  int a[18];
  for(int i = 0; i < 18; i++) { 
    cout << "Inserisci un numero intero: " << " e il minore " << minore << endl;
    cin >> a[i];
  }
  versioneRicorsiva(a, 0, a[0], a[0]);

  return 0;
}
