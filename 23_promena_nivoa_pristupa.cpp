#include <iostream>
using namespace std;

class Primarna{
protected:
  string ime;
public:
  void setuj_ime(string unos_imena){
    ime = unos_imena;
    cout << "Ime iz primarne klase je: " << ime << endl;
  }
};

class Sekundarna : private  Primarna{
public:
  Primarna :: ime;
  void printaj_ime(){
    cout << "Ime iz sekundarne klase: " << ime << endl;
  }

  void funkcijaKojaPoziva(string neki_string){
    setuj_ime(neki_string);
  }
};
class Tercijarna : public Sekundarna{
public:
  void tercijarnaFunkcija(string neki_string2){
    funkcijaKojaPoziva(neki_string2);
  }
};


int main(){
  Sekundarna obj;
  obj.ime = "Goran";
  //obj.tercijarnaFunkcija("Marinko");
  obj.printaj_ime();

  return 0;
}