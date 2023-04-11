#include <iostream>
using namespace std;
//Polimorfiam ili automatika ili virtuene funkcije, ispred funkicje se stavlja virtual.
//u tom slucaju se samo pravi funkcija u klasi a u sledecim klasama ih razradjujemo.
//U ovom sucaju je to funkcija javiSe.
//znaci sekretarica ce se javiti u oba slucaja samo je pitanje hoce li to biti fiksni ili pmobilni telefon.
class Sekretarica{
public:
  virtual void javiSe(){
 }
 void druga_vir_metoda(){};
};
class SekretaricaMobilni : Sekretarica{
public:
  void javiSe()=0;
};
class SekretaricaFiksni : Sekretarica{
public:
  void javiSe(){
    cout << "Javljanje sa fiksnog. " << endl;
  }



};
class Podklasa_za_detaljisanje : SekretaricaMobilni{
  public:
    void javiSe(){
      cout << "Javljam se sa mobilngo iz podklase!" << endl;
    }
    void druga_vir_metoda(){
      cout << "BLA BLA" << endl;}

};

int main(){
  Podklasa_za_detaljisanje poziv1;
  poziv1.javiSe();
  poziv1.druga_vir_metoda();


  return 0;
}