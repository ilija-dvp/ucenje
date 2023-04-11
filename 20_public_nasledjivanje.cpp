#include <iostream>
using namespace std;
//U ovom slucaju smo koristii
class Primarna{
  protected:
    string ime;
    public:
      //Funkcija koja odma setuje i printa!
      //Mogli smo razdvojiti pa posebno napraviti funkciju za printanje.
      void setuj_ime(string unos_imena){
        ime = unos_imena;
        cout << "Ime iz primarne klase je: " << ime << endl;
      }
};
//Ovde smo napravili drugu klasu i povukli podatke iz prethodne klase.

class Sekundarna : public Primarna{
  public:
    void printaj_ime(){
      cout << "Ime iz sekundarne klase: " << ime << endl;
    }
};
//A u mejnu smo napravili objekat i setovali ime a ispod smo pozvali ime preko sekundarne klase.
int main(){
Sekundarna obj;
obj.setuj_ime("Aleksandar");
obj.printaj_ime();



  return 0;
}