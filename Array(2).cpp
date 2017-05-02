#include <iostream>		//Library
using namespace std;

int M [3][3];
int M1 [3][3];
int M2 [3][3];

	int main () {
//deklarasi
      for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
          cin >> M1[i][j];
          cin >> M2[i][j];
          M[i][j]=M1[i][j]+M2[i][j];
        }
      }

      for (int x=0;x<3;x++) {
        cout << endl;
        for (int y=0;y<3;y++) {
          cout << M [x] [y] <<" ";
        }
      }
		cin.get();
		return 0;
	}
