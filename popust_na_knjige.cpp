#include "iostream"
using namespace std;
int main() {

  int broj_knjiga;
  int popust;

  cout << "Unestite broj kupljenih knjiga: ";
  cin >> broj_knjiga;

  if (broj_knjiga > 0 && broj_knjiga <= 5) {
    cout << "Niste  ostvarili popust." << endl;
  }
  else if (broj_knjiga > 5 && broj_knjiga <= 10) {
    cout << "Ostvarili ste 10% poputa!" << endl;
  }
 else  if (broj_knjiga > 10 && broj_knjiga <= 20) {
    cout << "Ostvarili ste 15% popusta!" << endl;
  }
   else if (broj_knjiga >= 20) {
    cout << "Ostvarili ste 20% popusta!" << endl;
  } else {
    cout << "Uneli ste nevazeci podatak!" << endl;
  }
  return 0;
}