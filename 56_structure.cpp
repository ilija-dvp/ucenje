#include "iostream"
#include <cstring>
using namespace std;

// 'struct' - tabela/sablon u koji unosimo podatke
// U tijelo petlje u Velikim zagradama definisemo tip podataka (data tipe)
// A u uglastim zagradama unosimo maksimalan broj karaktera koji moze da sadrzi neko ime koje cemo unijeti [50]
struct Traktor {
  char Naziv[50];
  char Proizvodjac[50];
  char Namjena[100];
  int Snaga;
};
int main() {
//Pozivamo komandu (struct)
  struct Traktor Traktor1;
  struct Traktor Traktor2;
  // Ubacivanje konkretnih podataka
  // Vazna stvar je da nakon 'strcpy()' u zagradi nakon naziva (Traktor1) mora da stoji tacka pa onda naziv podatka (Naziv, Proizvodjac, Vrednost...)
  // A posle naziva podatka dolazi sama informacija(Zetor, Ceska...)
  strcpy(Traktor1.Naziv, "Zetor");
  strcpy(Traktor1.Proizvodjac, "Ceska");
  strcpy(Traktor1.Namjena, "Poljoprivreda i Sumarstvo");
  Traktor1.Snaga = 80;
  cout << "Nazivi traktora i njihove karakteristike." << endl;
  cout << endl;

  // Vadjenje konkretnih podataka
  cout << "Naziv trktora:\t  \t" << Traktor1.Naziv << endl;
  cout << "Proizvodjac traktora:\t " << Traktor1.Proizvodjac << endl;
  cout << "Namjena traktora:\t " << Traktor1.Namjena << endl;
  cout << "Snaga traktora u KW:\t " << Traktor1.Snaga << endl;

cout << endl;

  strcpy(Traktor2.Naziv, "Hurliman");
  cout << "Naziv drugog traktora:\t " << Traktor2.Naziv << endl;
  strcpy(Traktor2.Proizvodjac, "Italija");
  cout<< "Proizvodjac traktora je: " << Traktor2.Proizvodjac << endl;
  strcpy(Traktor2.Namjena, "Poljoprivreda");
  cout << "Namjena traktora je:\t" <<Traktor2.Namjena << endl;
  Traktor2.Snaga = 105;
  cout << "Snaga traktora u KW je: " << Traktor2.Snaga << endl;

  return 0;
}