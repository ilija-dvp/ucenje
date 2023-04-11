#include <iostream>
using namespace std;

class Klasa{
    private:
      string ime;
      int godine;
      //Defaultne ili ustaljenje parametre unutar konstruktora pravimo tako sto cemo nakon deklarisanja varijabli u provate dati vrijendosti varijablama u konstruktoru
      //Defaultne vrijednosti unosimo tako sto u malim zagradama konstruktora odma definisemo string i intidzer i odma im dajemo vrijednost
      //A u viticastim zagradama samo to definisemo i upisemo printanje.
    public:
      Klasa(string def_string = "Aleksandar", int def_int = 33 ){
        ime = def_string;
        godine = def_int;
        cout << "Default ime: " << ime << endl;
        cout << "Default godine: " << godine << endl;
      }
};
int main(){
  //U mainu samo pozovemo klasu i automatski dobijamo defaultne parametre.
Klasa();

  return 0;
}