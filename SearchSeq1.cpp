#include <iostream>
using namespace std;

int main() {
  int x[n];
  int cari;
    for (int i=0;i<10;i++) {
      cout<<"Masukan Nilai "<<i+1 ": ";
      cin>>x[i];
    }
      cout<<endl<<"Nilai Pencarian : \n";
      cin>>cari;
        for (int i=0;i<10;i++) {
          if (cari == x[i]){
              cout<<"Data Ditemukan!!!";
              break;
            }
            else {}
          }
              cout<<"Data Tidak Ditemukan!!!";


  cin.get();
  return 0;
}
