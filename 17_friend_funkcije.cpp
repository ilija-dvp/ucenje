#include <iostream>
using namespace std;

class Klasa{
public:
  string ime = "Aleksandar";
  int godine = 40;

  void obicna_funkcija() {
    cout << ime << " " << godine << endl;
  }
  //Primjer friend funkcije
  //Friend funkciju napravimo u klasi a zatim je definisemo van klase a prije mejna!
friend void prijateljska_funkcija(Klasa obj);
};
//Definisanje funkcije.
//U ovom slucaju picemo ime funkcije i u malim zagradama ime klase i objekat
//Zatim u printanju "cout" uz varijable unosimo ime objekta
void prijateljska_funkcija(Klasa obj){
  cout << obj.ime<< " " << obj.godine  << endl;
}

int main(){
  //Zatim u mejnu pravimo objekat
  //Posle objekta pravimo funkciju i u zagradama taj isti objekat
  //na taj nacin smo pristupii varijablama preko objekta i mozvali varijable!
Klasa privremeni_obj;
prijateljska_funkcija(privremeni_obj);

  return 0;
}