#include <iostream>
using namespace std;
//variable global
  int n;
//prototype
int faktorial (int n);
//Program Utama
int main () {
  cout << "Masukan angka : "; cin >> n;
  cout << "Faktorial dari "<<n<<" adalah ";
  cout << faktorial(n);
return 0;
}
int faktorial (int n) {
  int hasil=1;
  for (int a=n;a!=0;a--) {
    cout << a;
    hasil=hasil*a; //perhitungan perkalian
    if (a!=1)
    cout << "x";
    else cout << "=";
}
return hasil;
}
