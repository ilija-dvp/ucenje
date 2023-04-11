#include "iostream"
using namespace std;

// Pravimo klasu i ime klase!
class pozoviMe {

  // Zatim pravimo funkcije unutar klase public
public:
  void printajNesto() { cout << "Prvi tekst za Printanje!" << endl; }

  void printajNesto2() { cout << "Drugi test za Printanje!" << endl; }
};
int main() {
  // Kada u mejnu pozivamo klasu prvo pozivamo ime klase
  // zatim pravimo objekat kog pravimo u trenutku kada nam treba to jes kada
  // pozivamo funkcije. Posle toga u sledeci red pozivamo ime objekta, stavlja se tacka i onda
  // naziv 'void' funkcije,obavezne zagrade i dvije tacke!
  // funkcije - metods eng
  pozoviMe Objekt;
  Objekt.printajNesto();
  Objekt.printajNesto2();

  return 0;
}