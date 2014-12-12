#include <iostream>
using namespace std;

int main(void) {
	int i, j, performance[3][7];
	for(i = 0; i < 3; i++) { //scorre le righe
		for(j = 0; j < 7; j++) { //scorre le colonne
			cout << "performance calciatore " << i+1 << ", giorno " << j+1 << ": " << endl;
			cin >> performance[i][j];
			performance[i][j] = performance[i][j] % 10;
		}
	}

	cout << "performance calciatore 1: ";
	for(j = 0; j < 7; j++)
		cout << performance[0][j] << " ";
	cout << endl;

	cout << "performance calciatore 2: ";
	for(j = 0; j < 7; j++)
		cout << performance[1][j] << " ";
	cout << endl;

	cout << "performance calciatore 3: ";
	for(j = 0; j < 7; j++)
		cout << performance[2][j] << " ";
	cout << endl;

	return 0;
}
