#include <iostream>
using namespace std;

//variable Global
int n,i,k,temp, pilihan;

int main() {
  cout<<"Masukan jumlah data yang akan di inputkan : "; cin>>n;
  int x[n];
    //Proses Penginputan Data
    for (i=1;i<=n;i++){
      cout<<"Masukan Data ke "<<i<<" : "; cin >> x[i-1];
    }
    pilihan:
    cout<<"|-----------------------|\n";
    cout<<"| 1. Pengurutan Menaik  |\n";
    cout<<"| 2. Pengurutan Menurun |\n";
    cout<<"|-----------------------|\n";
    cout<<"Pilih Metode Pengurutan : ";cin >> pilihan;

    //Proses pengurutan
    switch (pilihan) {
      case 1:
      for (i=0;i<n-1;i++){
          for (k=n-1;k>i;k--){
            if (x[k]<x[k-1]){
              temp=x[k];
              x[k]=x[k-1];
              x[k-1]=temp;
            }
          }
        }
      break;

      case 2:
      for (i=0;i<n-1;i++){
        for (k=n-1;k>i;k--){
          if (x[k]>x[k-1]){
            temp=x[k];
            x[k]=x[k-1];
            x[k-1]=temp;
          }
        }
      }
      break;

      default:

      cout<<"Pilihan anda TIDAK VALID\n"<<endl;
      goto pilihan;
      break;
    }

      cout<<"| ";
      for(i=0;i<n;i++){
        cout<<x[i]<<" | ";
      }
return 0;
}
