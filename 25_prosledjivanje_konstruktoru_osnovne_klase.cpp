#include <iostream>
using namespace std;
//Ovde smo odradili prosledjivanje parametara konstruktoru koji je u primarnoj klase preko sekundarne klase
//prvo napravimo klasu i neku string a zatim konstruktor u kome navodimo da je prosledjujemo string imenu.
class Primarna{
  public:
    string ime;
    Primarna(string privremeni_unos){
      ime = privremeni_unos;
      cout << "Uneto ime je: " << ime << endl;
    }
};
//Prosledjivanje se radi na taj nacin da napravimo novu klasu zatim nasledimo podatke iz primarne tako sto
//unesemo ime primarne klase a zatim ponovo ime sekundarne klase sa privremenim stringom u zagradama
//Nakon toga dvije tacke zatim ime konstruktora iz primarne klase i dajemo mu isti taj privremeni string
//Na taj nacin smo proslijedili podatke u konstruktor u primarnoj klasi.
class Sekundarna : public Primarna{
  public:
    Sekundarna(string neki_unos) : Primarna( neki_unos){
      ime = neki_unos;
      cout << "Izvrseno!" << endl;
    }
};

int main(){
  // U mejnu samo trema da povovemo sekundarnu klasu, napravimo objekat i unesemo taj parametar koji treba da proslijedimo.
  Sekundarna obj("Arandjel");


  return 0;
}