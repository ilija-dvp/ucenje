#include <iostream>
using namespace std;

// Napravili smo klasu i oznacili sa private
// U tom slucaju ne mozemo pozvati funkciju u menu
class NovaKlasa {
private:
  string printanje = "Proba privatnosti.";

  // To smo rijesili tako sto iznad one funkcuje koju hocemo da pozovemo u mejnu
  //  napisamo public: i na taj nacin sve ispod public ponovo postaje dostupno
  //  za pozivanje u mejnu
  // Na ovaj nacin smo pozvali ovaj string koji je i dalje ostao provate ali smo
  // po uradili indirektno preko void funkcije!
public:
  void printajString() { cout << printanje << endl; }
};

int main() {

  NovaKlasa objekat;
  objekat.printajString();

  return 0;
}