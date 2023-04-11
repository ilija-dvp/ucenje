#include <iostream>
using namespace std;
int main() {

  int izbor = 0;
  cout << "Gdje zelite da putuje ove godine? " << endl;
  cout << "Izaberite ponudu 1, 2 ili 3!" << endl;
  cout << "1. Gcka?" << endl;
  cout << "2. Crna Gora?" << endl;
  cout << "3. Turska?" << endl;
  cin >> izbor;

  // SWITCH naredba se koristi kod visestrukih grananja.
  // Tijelo 'switch' naredbe mora biti u velikim zagradama i sastoji se od
  // skupa slucajeva 'case'
  // 'defailt' naredba je opciona i sadrzi radnje koje program treba da izvrsi
  // ako unijeti izraz nije jednak bilo kojoj vrednosti sa 'case' oznakom.

  switch (izbor) {
  case 1:
    cout << "Dobar izbor. Za putovanje u Grcku ove godine morate izdvojiti "
            "vise novca za "
         << endl;
    cout << "nocne provode ali grcka nudi najbolje cijene smjestaja ove sezone!"
         << endl;
    break;

  case 2:
    cout << "Dobar izbor! Za putovanje u Crnu Goru ove godine morate izdvojiti "
            "vise novca za"
         << endl;
    cout << "smjestaj ali zato Crna Gora nudi besplatan ulaz na sve plaze! "
            "Zelimo vam ugodan odmor!"
         << endl;
    break;

  case 3:
    cout << "Turska je odlican izbor! Za putovanje u Tusku ove sezone morate "
            "izdvojiti vise"
         << endl;
    cout
        << "novca za smjestaj i za ulaz na plaze ali Turska nudi najpovoljniju "
           "i najuksniju htanu od svih tusitickih destinacija!"
        << endl;
    break;

  default:
    cout << "Izabrali ste ne vazecu ponudu!" << endl;
  }
  cout << endl;
  cout << "Hvala sto vjerujete nasim savjetima!" << endl;
  return 0;
}