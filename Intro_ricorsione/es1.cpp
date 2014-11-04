/*Esempio 1.
	 *Scrivere un metodo statico iterativo che, dato un array
	 *monodimensionale di interi a, restituisca false se tutti i
	 *numeri sono dispari, true altrimenti. Ad esempio a={7.13,7,9.01}
	 *restituisce false.
	 */ 
#include <iostream>

//versione ricorsiva basata su iterativa col while
void versioneRicorsiva(int i) {
  if(i == 0) return; //falsifico la condizione del while. In questo caso il while termina e la funzione restituisce nell'iterativo (return;)
  
  //questo è ciò che succedeva quando la condizione del while era vera. Caso i < 10!
  printf("Hello world\n");
  versioneRicorsiva(i+1); //attenzione: NON i++ o ++i!
  
}

//versione iterativa col while
void versioneIterativa() {
  int i = 0;
  	while(i < 10) {
  	  printf("Hello world\n");
  	  i++;
  	}
}

int main(void) {

  versioneIterativa();
  
  versioneRicorsiva(0); //alla fine tutti e due danno lo stesso output!

  return 0;
}
