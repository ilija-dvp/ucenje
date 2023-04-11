#include <iostream>
using namespace std;
// Ovde imamo funkciju iz primarne klase koja je preljepljena i u tom slucaju
// prilikom izvrsavanja programa dobijamo samo parametre iz sekundarne funkcije
class Primarna{
public:
  void istaMetoda(){
    cout << "Ja sam iz primarne klase! " << endl;
  }
};
class Sekundarna : public Primarna{
public:
  void istaMetoda(){
    cout << "Ja sam iz sekundarne klase! " << endl;
  }
};
//Kada hocemo da pozovemo metodu iz klase preko vanjske metode to radimo na sledeci nacin.
//Toj vanjskoj metodi kao parametar prosledimo ime klase i privremeni parametar
//Zatim privremenom parametru prosledjujemo tu neku metodu.
void nekaFunkcija(Primarna privremeni_unos){
  privremeni_unos.istaMetoda();
}
int main(){
  // A u mejnu pravimo objekat i pozivamo tu vanjsku funkciju i za parmetre joj dajemo objekat Sekundarne klase.
  //zapetljano ali tako radi :/
  Sekundarna obj;
  nekaFunkcija(obj);



  return 0;
}