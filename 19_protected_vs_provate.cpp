#include <iostream>
using namespace std;
//U ovoj vjezbi smo uzeli nasladjivanje klase iz prosle vjezbe samo sto smo ovde dodali protected.
//Protected moze da se koristi u klasi u kojoj se nalazi i u klasi u kojoj je nasledjena ta klasa.
//Seter za protected mozemo napraviti u toj klasi gdje je napravljena varijabla ili u klasi koja nasledjuje tu klasu.
class Lica {
  protected:
    int visina;
public:
  string ime;
  int godine;
  void setuj_ime(string unos_imena) { ime = unos_imena; }
  void setuj_godine(int unos_godina) { godine = unos_godina; }
};

class Zanimanje : public Lica {
public:
  string zanimanje;
  void setuj_zanimanje(string unos_zanimanja) { zanimanje = unos_zanimanja; }
  void setuj_visinu(int unos_visine){visina = unos_visine; }
  void printaj_sve() {
    cout << "Ime iz klase LIca: " << ime << endl;
    cout << "Godine iz klase Godine: " << godine << endl;
    cout << "Zanimanje iz klase Zanimanje: " << zanimanje << endl;
    cout << "Visina iz Protected: " << visina << endl;
  }
};
//Takodje smo u funkciju koja sve printa dodali printanje za visinu.
int main() {
//U mejnu dodamo seter i unenemo vrijednost i to je to.
  Zanimanje obj;
  obj.setuj_ime("Lazar");
  obj.setuj_godine(40);
  obj.setuj_zanimanje("Nervozni mehanicar");
  obj.setuj_visinu(190);
  obj.printaj_sve();




  return 0; }