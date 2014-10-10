//============================================================================
// Name : Consegna1-cicliforewhile.cpp
// Author : Agostino Mascitti
// Email : agostino_aless@yahoo.it
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Consegna: Chiedere all’utente 2 valori. Chiedere 20 numeri all’utente e stamparne il moltiplicato con i 2 valori, prima uno e poi l’altro.
// Nota: In questo progetto viene usato di fatto il C, ma ho creato un progetto C++ per usare cout e cin.
//============================================================================

int main() {
  
  //Chiedo 2 valori
  int moltiplicatori[2];
  cout << "Inserire 2 interi: ";
  cin >> moltiplicatori[0] >> moltiplicatori[1];
  
  //Chiedo 20 interi
  int num[20];
  for(int i = 0; i < 20; i++) {
    cout << "Inserire un intero ";
    cin >> num[i];
    cout << endl;
  }
  
  for(int i = 0; i < 20; i++) {
    if(i % 2 == 0) //% restituisce il modulo, cioè il resto della divisione. In questo caso mi chiedo se i è pari
      cout << num[i] * moltiplicato[0];
    else
      cout << num[i] * moltiplicato[1];
  }
  
  return 0;
}
