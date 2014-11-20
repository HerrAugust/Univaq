#include <iostream>
using namespace std;

int valori[] = { 5,6,0,1,-1,5,5,12,1,4 };

int trovaElemInPos(int posizione) {
		if(posizione == 0) return array[0];
	for(int i = 0; i < 10; i++) {
		valori[i] = valori[i+1];
  }
		
	return trovaElemInPos(posizione-1);
}
int main(void) {	
   int valRitorno = trovaElemInPos(4); //salvo il valore di ritorno per usarlo dopo
   cout << valRitorno << endl; //stampo 
   return 0;
}
