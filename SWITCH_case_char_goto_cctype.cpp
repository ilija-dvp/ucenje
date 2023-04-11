#include "iostream"
#include <cctype>
using namespace std;
int main() {
  int godina;
  char izbor[1];
ponovi:
  cout << "Unesite godinu: ";
  cin >> godina;

  if (godina > 0) {
    // Ovo if znadi da se komanda switch izvrsava samo ako je ispunjen zahtjev u
    // zagradi if a to je da je uneseni broj/godina veca od nule!! u slucaju da
    // se taj uslov ne ispuni izvrsava se else radnja!

    switch (godina % 4) {
    case 0:
      cout << "Uneta godina je prestupna!" << endl;
      break;

    default:
      cout << "Uneta godina nije prestupna!" << endl;
      break;
    }

  } else {
    cout << "Uneti podatak nije ispravan!" << endl;
  }
  // U slucaju switch - case - default naredbi bitno je da posle svake "case" i
  // "default" naredbe idu dvije tacke a posle svakog "case" ide "break"!!
greska:
  cout << "Da li zelite ponovo da unesete godinu? \nda-d \nne-n" << endl;
  cin >> izbor;
  // Operacija tolower omoguvaca da unosimo i veliko i maloslovo u konzoli.
  // U slucaju koriscenja operacije tolower moramo pozvati heder cctype!
  if (izbor[0] == 'd' || tolower(izbor[0]) == 'd') {
    goto ponovi;
  } else if (izbor[0] != 'd' && tolower(izbor[0]) != 'd' && izbor[0] != 'n' &&
             tolower(izbor[0]) != 'n') {
    cout << "Uneti karakter nije ispravan!" << endl;
    goto greska;
  }

  // Naredba goto+kljucna rijec znaci da vracamo program na liniju gdje smo
  // upisali kljucnu rijec i program nastavlja da se izvrsava sa te linije.
  // Koristena je i promjenljiva char, definisali smo je na pocetku programa a
  // zatim pozvali kod izbora slova.
  return 0;
}