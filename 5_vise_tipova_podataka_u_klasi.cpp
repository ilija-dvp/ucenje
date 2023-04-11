#include <iostream>
using namespace std;

class Knjige {
public:
  string Naslov;
  string Autor;
  char Oblast;
  int Redni_broj;

  void PrintajSve() {
    cout << "Naslov knjige : " << Naslov << endl;
    cout << "Autor: " << Autor << endl;
    cout << "Objast: " << Oblast << endl;
    cout << "Redni broj: " << Redni_broj << endl;
  }
};

int main() {

Knjige Knjiga_1;
Knjiga_1.Naslov = "Teorija Relativiteta";
Knjiga_1.Autor = "Nikola Tesla";
Knjiga_1.Oblast = 'A';
Knjiga_1.Redni_broj = 10;
Knjiga_1.PrintajSve();

return 0; }