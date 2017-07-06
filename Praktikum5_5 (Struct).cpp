#include <iostream>		//Library
#include <string.h>		//Library
using namespace std;

typedef struct {
	int hari;
	string bulan;
	int tahun;
} tanggal;

	int main () { //Fungsi
		tanggal a;
		cout << "Masukan Tanggal : ";cin >> a.hari;
		cout << "Masukan Bulan : ";cin >> a.bulan;
		cout << "Masukan Tahun : ";cin >> a.tahun;
		cout << "-------------------";
		cout << a.hari <<" "<<a.bulan<<" "<<a.tahun;
		cout << "-------------------";
		cout << a;
		cin.get();
		return 0;
}
