#include <iostream>
using namespace std;
//Nasledjivanje protected parametara ide na sledeci nacin
//Ne mozemo raditi na isti nacin kao sa public
//Moramo napraviti funkciju koja prosledjuje parametre funkciji "setuj_ime".
class Primarna{
protected:
  string ime;
public:
  void setuj_ime(string unos_imena){
    ime = unos_imena;
    cout << "Ime iz primarne klase je: " << ime << endl;
  }
};

class Sekundarna : protected  Primarna{
public:
  void printaj_ime(){
    cout << "Ime iz sekundarne klase: " << ime << endl;
  }
  //Funkcija koja pravi string "neki_string" i prosljedjuje ga funkciji "setui_ime"
  //Na nacin na koji je odradjeno u primjeru
  void funkcijaKojaPoziva(string neki_string){
    setuj_ime(neki_string);
  }

};
int main(){
  Sekundarna obj;
  obj.funkcijaKojaPoziva("Markan");
  obj.printaj_ime();


  return 0;
}
//Ako povlacimo podatke iz neke klase a hocemo da ostanu protected onda moramo da napravimo funkciju/metodu koja povlaci neku drugu
//funkciju i daje joj neke parametre.
//U sustunu najvise se koristi nasledjivanje preko public!!