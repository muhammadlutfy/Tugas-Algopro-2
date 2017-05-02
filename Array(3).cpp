#include <iostream>		//Library
using namespace std;

int a, b;

	int main () {
cout << "Inputkan Jumlah Baris : "; cin >> a;
cout << "Inputkan Jumlah Kolom : "; cin >> b;
//deklarasi
char M [a][b];
      for (int i=0;i<a;i++) {
        cout << endl;
        for (int j=0;j<b;j++) {
          cin >> M[i][j];

        }
      }

      for (int x=0;x<a;x++) {
        cout<<endl;
        for (int d=0;d<b;d++){
          cout << " ---";
        }
        cout << endl<< "| ";
        for (int y=0;y<b;y++) {
          cout << M [x] [y] <<" | ";
        }
      }
      cout<<endl;
      for (int d=0;d<b;d++){
        cout << " ---";
      }
		cin.get();
		return 0;
	}
