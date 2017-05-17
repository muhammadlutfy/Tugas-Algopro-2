#include <iostream>
using namespace std;
//prototype
void TampilData();

int array[10];
int cari, awal,tengah,akhir,n, isi;


int main() {
  char pilihan;
  cout<<"Masukan berapa data yang akan di masukan : ";cin>>n;
  int awal=0;
  int akhir=n-1;

  cout<<"\nMasukan data yang ingin di cari : "; cin >> cari;
  pilih:
  cout << "\na. Terurut Menaik\n";
  cout << "b. Terurut Menurun\n";
  cout << "Pilih :";
  cin >> pilihan ;

//Pilihan A
  if (pilihan == 'a' || pilihan == 'A'){
    for (int i=0;i<n;i++){
      isi=i+1;
      array[i]=isi;
    }
    //Algoritma Pencarian "a"
    for (int i=0;i<n;i++) {
      tengah=awal+akhir;
      tengah=tengah/2;
      if (array[tengah]==cari) {
        cout<<"Data Ditemukan!!!";
        TampilData();
        return 0;
      }
          else if (array[tengah]<cari){
            awal=tengah+1;
          }
              else {
                akhir=tengah-1;
              }
    }
      cout << "Data Tidak Ditemukan !!!";
      return 0;
  }

  //Pilihan B
    else if (pilihan =='b' || pilihan == 'B'){
      isi = n+1;
      for (int i=0;i<n;i++){
        isi=isi-1;
        array[i]=isi;
      }
      //Algoritma Pencarian "b"
      for (int i=0;i<n;i++) {
        tengah=awal+akhir;
        tengah=tengah/2;
        if (array[tengah]==cari) {
          cout<<"Data Ditemukan!!!";
          TampilData();
          return 0;
        }
            else if (array[tengah]>cari){
              awal=tengah+1;
            }
                else {
                  akhir=tengah-1;
                }
      }
        cout << "Data Tidak Ditemukan !!!";
        TampilData();
        return 0;
    }
    else {
        cout<<"\nPilihan anda tidak valid"<<endl;
        goto pilih;
      }
  cin.get();
}


void TampilData() {
  cout<<endl;
  cout<<"\n| ";
  for (int i=0;i<n;i++){
    cout << array[i] << " | ";
  }
}
