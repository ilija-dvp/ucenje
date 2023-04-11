#include <iostream>
using namespace std;
//Nasledjivanje klasa znaci da uzimamo podatke iz nekedruge klase i upanredimo ih, to jeste dodamo im nesto u ovom slucaju smo dodli zanimanje.
//Prvo smo napravili klasu lica
class Lica {
public:
  string ime;
  int godine;
  //Takodje smo napravili funkcije preko kojih unosimo podatke u mejnu.
  void setuj_ime(string unos_imena) { ime = unos_imena; }
  void setuj_godine(int unos_godina) { godine = unos_godina; }
};
//Zatim smo napravili klasu zanimanje u kojoj smo povukli podatke iz prethodne klas
//To radimo tako sto napravimo novu klazu zatim stavimo dvije tacke, prepisemo public i ime klase iz koje povlacimo podatke.
class Zanimanje : public Lica {
public:
  string zanimanje;
  void setuj_zanimanje(string unos_zanimanja) { zanimanje = unos_zanimanja; }
  void printaj_sve() {
    cout << "Ime iz klase LIca: " << ime << endl;
    cout << "Godine iz klase Godine: " << godine << endl;
    cout << "Zanimanje iz klase Zanimanje: " << zanimanje << endl;
  }
};

int main() {
  //Pravimo obekat, setujemo podatke i zatim pozivamo funkciju koja sadrzi sve podatke i na taj nacin smo dobili podatke iz obje klase.  Zanimanje obj;
  Zanimanje obj;
  obj.setuj_ime("Lazar");
  obj.setuj_godine(40);
  obj.setuj_zanimanje("Nervozni mehanicar");
  obj.printaj_sve();




  return 0; }