#include <iostream>		//Library
#include <string.h>		//Library
using namespace std;


	int main () { //Fungsi
		//Definisi Fungsi
		string nama [10];

		for (int i=0;i<10;i++) {
			cout << "Masukan Nama : ";cin >> nama[i];
		}
			for (int x=0;x<10;x++) {
				cout << nama[x] << " - ";
					for (int y=1;y<10;y++) {
						cout << nama[y] << endl;
					}
			}

		cin.get();
		return 0;
}
