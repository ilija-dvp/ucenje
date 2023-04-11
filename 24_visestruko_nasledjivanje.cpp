#include "iostream"
using namespace std;
class KlasaIme{
public:
  string ime = "Gvozden";
  void printajIme(){
    cout << "Ime je: " << ime << endl;
  }
};
class KlasaPrezime{
public:
  string prezime = "Gvozdenovic";
  void printajPrezime(){
    cout << "Prezime je: " << prezime << endl;
  }
};
//Visestruko nasledjivanje se radi kao i nasledjivanje jedne klase
//Samo se posle nove kalse stavi dvotacka zatime imena klasa koje se nasledjuju a izmedju njih zarez!
class KlasaLice : public KlasaIme, KlasaPrezime {
public:
  void globalniPrint(){
    printajIme();
    printajPrezime();
  }
};


int main(){
  KlasaLice obj;
  obj.globalniPrint();





  return 0;
}