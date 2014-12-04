#include <iostream>
using namespace std;

int numeri[18];

void versioneRicorsiva(int varScorr, int maggiore, int minore) {
	if(varScorr == 5) {
		cout << "il maggiore è " << maggiore << endl;
		return;
	}
	if(numeri[varScorr] < minore)
		minore = numeri[varScorr];
	if(numeri[varScorr] > maggiore)
		maggiore = numeri[varScorr];
	varScorr++;
	return versioneRicorsiva(varScorr, maggiore, minore);
}

int main(void) {
	//Nota: questo ciclo non va trasformato in ricorsivo per consegna
	for(int i = 0; i < 18; i++) {
		cout << "Inserisci un numero intero: " << endl;
		cin >> numeri[i];
	}
	int minore = numeri[0];
	int maggiore = numeri[0];
	int varScorr = 0;
	versioneRicorsiva(varScorr, maggiore, minore);

	return 0;
}
