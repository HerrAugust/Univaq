/*Esempio 1.
	 *Scrivere un metodo iterativo che, dato un array
	 *monodimensionale di interi a, restituisca false se tutti i
	 *numeri sono dispari, true altrimenti. Ad esempio a={7,13,7,9,1}
	 *restituisce false.
	 */ 
#include <iostream>

using namespace std;
	
int versioneRicorsiva(int a[], int dim_a, int i) { //sostituto del while, in cui conosco anche i!
  if(i == dim_a) //falsificazione della condizione del while: esco dal ciclo while e restituisco false;
    return 0;
    
  //se la condizione del while è vera:
  if(a[i] % 2 == 0) //ho trovato un numero pari
    return 1;
  i++;
  return versioneRicorsiva(a, dim_a, i+1); //nuova iterazione del while => nuova chiamata alla funzione sostitutiva al while. Notare il return!
}
	 
int versioneIterativa(int a[], int dim_a) {
  int i = 0;
  while(i < dim_a) {
    if(a[i] % 2 == 0) //ho trovato un numero pari
      return 1;
    i++;
  } //nuova iterazione => nuova chiamata alla funzione ricorsiva, che fa le veci del while
  return 0;
}
	 
int main(void) {
  
  int a[] = { 7,13,7,9,1 };
  
  cout << versioneIterativa(a, 5) << endl;
  
  cout << versioneRicorsiva(a, 5, 0) << endl;
  
  return 0;
}
