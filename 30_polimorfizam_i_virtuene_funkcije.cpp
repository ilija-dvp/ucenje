#include <iostream>
using namespace std;
//Polimorfiam ili automatika ili virtuelne funkcije, ispred funkicje se stavlja virtual.
//u tom slucaju se samo pravi funkcija u klasi a u sledecim klasama ih razradjujemo.
//U ovom sucaju je to funkcija javiSe.
//znaci sekretarica ce se javiti u oba slucaja samo je pitanje hoce li to biti fiksni ili pmobilni telefon.
class Sekretarica{
  public:
   virtual void javiSe(){

   }
};
class SekretaricaMobilni : Sekretarica{
  public:
    void javiSe(){
      cout << "Javljanje sa mobilnog. " << endl;
    }
};
class SekretaricaFiksni : Sekretarica{
public:
  void javiSe(){
    cout << "Javljanje sa fiksnog. " << endl;
  }
};

int main(){
SekretaricaMobilni poziv1;
SekretaricaFiksni poziv2;

poziv1.javiSe();
poziv2.javiSe();


  return 0;
}