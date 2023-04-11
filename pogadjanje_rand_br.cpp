#include <ctime>
#include <iostream>
using namespace std;
int main() {
  srand(time(0));

  int zadati_broj = rand() & 10;

  int pokusaj;
  int pogadjanja = 0;

  cout << "Igra pogadjanja." << endl;
  cout << "Maksimalan broj pokusaja 10" << endl;



  for (int i = 0; i < 10; i++) {
    pogadjanja = i+1;
    cout << "Unesite vas broj: " << endl;
    cin >> pokusaj;
    if (pokusaj < zadati_broj) {
      cout << "Uneli ste manji broj!" << endl;
    }
    if (pokusaj > zadati_broj) {
      ;
      cout << "Uneli ste veci broj!" << endl;
    }
    if (pokusaj == zadati_broj) {
      cout << "Cestitam, pogodili ste broj!" << endl;
     
      break;
    }
  }
cout << "Iskoristili ste " << pogadjanja << " pokusaja!" << endl;
  return 0;
}