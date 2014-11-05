//Es1.cpp stampare a video "Hello world" 10 volte con un ricorsivo e con un iterativo

#include <iostream>

using namespace std;

//versione ricorsiva basata su iterativa col while
void versioneRicorsiva(int i) {
  if(i == 0) return; //falsifico la condizione del while. In questo caso il while termina e la funzione restituisce nell'iterativo (return;)
  
  //questo è ciò che succedeva quando la condizione del while era vera. Caso i < 10!
  cout << "Hello world" << endl;
  return versioneRicorsiva(i+1); //attenzione: NON i++ o ++i!
  
}

//versione iterativa col while
void versioneIterativa() {
  int i = 0;
  	while(i < 10) {
  	  cout << "Hello world" << endl;
  	  i++;
  	}
}

int main(void) {

  versioneIterativa();
  
  versioneRicorsiva(0); //alla fine tutti e due danno lo stesso output!

  return 0;
}
