#include <iostream>
#include <string>
using namespace std;

class Klasa {
private:
  string noviString();

public:
  void funkcijaPrintanja() { cout << noviString() << endl; }

public:
  void funkcijaUpisivanja(string unosenjeParametra) {
    noviString() = unosenjeParametra;
  }
};
int main() {

  Klasa objekat;
  objekat.funkcijaUpisivanja("Parametar za probu");
  objekat.funkcijaPrintanja();

  return 0;
}