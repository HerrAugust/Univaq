#include <iostream>
using namespace std;

//Questa è la funzione ricorsiva
void metRic(int i) {
 if(i==5) return;
 cout << “Ripeto” << endl;
 i++;
 return metRic(i);
}

/* Questa è la funzione iterativa
void metIter() {
 int i = 0;
 while(i<5) {
 cout << “Ripeto” << endl;
 i++;
 }
}
*/

int main(void) {
 int i = 0;
 metRic(i);
 //metIter(); Avrai lo stesso output
 return 0;
}
