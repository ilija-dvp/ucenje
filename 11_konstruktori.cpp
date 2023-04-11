#include <iostream>
#include <string>
using namespace std;

class Klasa{
    private:
    string ime;
    string prezime;
    int godine;

    //Konstruktor se kreira pod public tako sto za ime funkcije upisemo ime klase i obicne zagrade
    //a zatim viticaste  u kojima definisemo operaciju ili pocetne parametre (u ovom slucaju licni podaci covjeka) i opetaciju!


  public: Klasa() {
ime = "Despot";
prezime= "Despotovic";
godine = 25;

cout << "Ime: " << ime << endl;
cout << "Prezime: " << prezime << endl;
cout << "Godien: " << godine << endl;

    }  };

//Napravio sam jos jednu klasu radi probe!
    class Klasa2{
      public:
        Klasa2(){
          cout << "Proba obicnog konstruktora!" << endl;
        }

    };


int main(){
//Cim napravimo objekat konstruktor se automatski izvrsava
// Konstruktori se rade kad nam je potrebno da prilikom pozivanja
//klase odma dobijemo neke parametre u ovom slucaju licni podaci covjeka
Klasa objekat;
Klasa2 objekat2;

  return 0;
}