#include <iostream>
using namespace std;

//prototype
int faktorial (int n);
//Program Utama
int main () {
  cout << "Faktorial dari 10 adalah ";
  cout << faktorial(10);
return 0;
}

//
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
