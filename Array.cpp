#include <iostream>		//Library
using namespace std;

	int main () {
//deklarasi
		char chara[10] ;
		int urutan=1;
		int jumlah=0;
//Fungsi
		for (int a=0;a<10;a++) {
			cout << "Silahkan masukan data ke " << urutan<< " : ";
			cin >> chara[a];
				if (chara[a]=='a' || chara[a]=='A') {
					jumlah++;
				}
			urutan++;
		}
		cout << "--------------------------------\n";
		cout << "Data yang anda masukan adalah : \n";
		cout << "| ";
			for (int b=0;b<10;b++) {
				cout << chara[b] << " | " ;
			}
		cout <<endl<< "Banyak karakter 'A' berjumlah "<< jumlah << " buah.";
		cin.get();
		return 0;
	}
