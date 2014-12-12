#include <iostream>
using namespace std;

int main(void) {
	int i, performance1[7], performance2[7], performance3[7];
	for(i = 0; i < 7; i++) {
		cout << "performance calciatore 1, giorno " << i+1 << ": " << endl;
		cin >> performance1[i];
	}
	for(i = 0; i < 7; i++) {
		cout << "performance calciatore 2, giorno " << i+1 << ": " << endl;
		cin >> performance2[i];
	}
	for(i = 0; i < 7; i++) {
		cout << "performance calciatore 3, giorno " << i+1 << ": " << endl;
		cin >> performance3[i];
	}

	cout << "performance calciatore 1: ";
	for(i = 0; i < 7; i++)
		cout << performance1[i] << " ";
	cout << endl;
 
	cout << "performance calciatore 2: ";
	for(i = 0; i < 7; i++)
		cout << performance2[i] << " ";
	cout << endl;
 
	cout << "performance calciatore 3: ";
	for(i = 0; i < 7; i++)
		cout << performance3[i] << " ";
	cout << endl;

	return 0;
}
