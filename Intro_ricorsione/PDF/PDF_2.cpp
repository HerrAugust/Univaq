#include <iostream>
using namespace std;

//Sopra sia alla funzione ricorsiva sia alla iterativa, perchè in entramber num[] deve essere visibile
int num[12] { 3,2,0,9,0,-1,-1,10,2,7,6,8 };

//Questa è la funzione ricorsiva
int metRic(int vsa, int minimo) {
 if(vsa == 12) return minimo;
 if(num[vsa] < minimo)
 minimo = num[vsa];
 vsa++;
 return metRic(num, vsa, minimo);
}

/* Questa è la funzione iterativa
void funzIter() {
int minimo = num[0];
varScorrArray = 0;
while(varScorrArray < 12) {
 if(num[varScorrArray] < minimo)
 minimo = num[varScorrArray];
 varScorrArray++;
}
cout << minimo << endl;
}
*/

int main(void) {
 int minimo = num[0];
 varScorrArray = 0;
 metRic(varScorrArray, minimo);
 cout << minimo << endl;
 //funzIter() Avrai lo stesso output
 return 0;
}
