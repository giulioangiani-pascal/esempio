#include <iostream>
#include "strutture.h"

using namespace std;

void qualcosaltro() {
	cout << "qualcosaltro\n";
}

void qualcosa() {
	cout << "qualcosa\n";
}

void ordinaarray(int v[], int N) {
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (v[i]<v[j]) swap(v[i], v[j]);
		}
	}
}

void stampaarray(int v[], int N) {
	for (int i=0; i<N; i++) {
		cout << v[i] << " ";
	}
}

int main() {
    cout << "Che bello programmare in C++!" << endl;
    
    // test ordinaarray
    int arr[] {2,3,6,5,1,7,4};
    stampaarray(arr, 7); cout << endl;
    ordinaarray(arr, 7);
    stampaarray(arr, 7); cout << endl;
    
    return 0;
}
