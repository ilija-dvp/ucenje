#include <iostream>
using namespace std;

//Obavezno je dati zarlicita imena klasama, funkcijama i objektima!!!
class Klasa{
//Public znaci da ce naredni dio klase (sve ispod public) biti dostupan u mejnu
public:
    string NekiString = "String radi!";

    void printajString(){

      cout << NekiString << endl;
    }
};
int main(){

  //Pozivanje funkcije preko pointera
  //Prvo ime klase zatim pravimo pointer sa '*' zaim znak jednakosti i obavezni ide'new' zatim opet ime klase i zagrade '()"
  // Zatim prepisujemo pointer u drugi red i upisujemo '->' strelicu, to je obavezno a zatim ime vunkcije!

  Klasa *pointer = new Klasa();
  pointer->printajString();
  
// Na ovaj nacin smo pozvali funkciju preko pointera


  //Pozivanje stringa preko pointera
  //Isti macin kao kod pozivanja funkcije samo sto je potrebno prije samog pozivanja
  //stringa unijeti cout<< kao sto moze da se vidi na primjeru.
Klasa *nekiPtr = new Klasa();
cout << nekiPtr->NekiString;

Klasa *drugiPtr = new Klasa();
cout << drugiPtr->NekiString;

  return 0;
}