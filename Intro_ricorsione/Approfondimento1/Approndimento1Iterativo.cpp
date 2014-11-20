#include <iostream>
using namespace std;

void versioneIterativa() {
int numeri[18];
//Nota: questo ciclo non va trasformato in ricorsivo per consegna
for(int i = 0; i < 18; i++) {
cout << "Inserisci un numero intero: " << endl;
cin >> numeri[i];
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


int main(void)
{
  versioneIteratva();
  return 0;
}
