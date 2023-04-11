#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));
  int zadati_br = rand() & 50;
  int pokusaj = 0;
  int pogadjanja = 0;

  cout << "Igra pogadjanja!" << endl;
  for (int i = 0; i < 10; i++) {
    pogadjanja++;
    cout << "Unesite vas pokusaj: " << endl;
    cin >> pokusaj;
    if (pokusaj < zadati_br) {
      cout << "Uneli ste manji broj! " << endl;
    }
    if (pokusaj > zadati_br) {
      cout << "Uneli ste veci broj! " << endl;
    }

    if (pokusaj == zadati_br) {
      cout << "CESTITAM, POGODILI STE BROJ!!!" << endl;
      cout << "Iskoristili ste " << pogadjanja << " pokusaja! " << endl;
      break;
    }
    if (pogadjanja > 9) {
      cout << "Iskoristili ste maksimalnih " << pogadjanja << " pokusaja "
           << endl;
    }
  }

  return 0;
}
