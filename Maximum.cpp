#include <iostream>

using namespace std;
//variable global
int a, b;

int main () {
  cout << "Masukan nilai a : "; cin >> a ; cout << endl;
  cout << "Masukan nilai b : "; cin >> b ; cout << endl;
  if (a<b) {
    cout << "Nilai maxsimumnya adalah "<<b;
  }
    else cout << "Nilai maxsimumnya adalah "<<a;
return 0;
}
