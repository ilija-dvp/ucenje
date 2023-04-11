#include <iostream>
using namespace std;
//Overload-preljepljivanje konstruktora se koristi kada treba da unesemo neke nove parametre
//u ovom slucaju ce to biti ime i starost covjeka
class Klasa{
    private:
      string ime = "John Smith";
      int starost = 30;
      // Nakon unesenih defaultnih podataka sada pravimo konstruktor koji automatski poziva podatke
    public:
      Klasa(){
        cout << "Default konstruktor!" << endl;
        cout << "Default ime: " << ime << endl;
        cout << "Default starost: " << starost << endl;
      }
//Nakon konstuktora za defaultne podatke sada prelazimo na pravjenje konstruktora koji mijenjaju podatke
// U prvom konstruktoru mijenjamo vrijendost stringa
      Klasa(string nova_vrednost){
        cout << "Novi string, nije vise defaultni" << endl;
        ime = nova_vrednost;
      }
// U drugom konstruktoru mijenjamo vrijednost intidzera
      Klasa(int nova_vrednost){
        cout << "Novi int, nije vise defaultni" << endl;
        starost = nova_vrednost;
      }
//  U trecem konstruktoru mijenjamo vrijednos i stringa i intidzeta
      // Ovo radimo iz razloga sto se moze desiti da mijenjamo samo string ili samo intidzr ili oboje od jednom
      // Zato pravimo sve 3 kombinacije
Klasa(string nv_vr1, int nv_vr2){
  cout << "Zamenjena oba parametra!" << endl;
  ime = nv_vr1;
  starost = nv_vr2;
}
// I na kraju funkcija koja ce nakon obrade podataka sve to da isprinta
      void izvjestaj(){
        cout <<"Izvjestaj: " << endl;
        cout << "-----------------------" << endl;
        cout << "Ime je: " << ime << endl;
        cout << "Starost je: " << starost << endl;
      }
};
int main(){
// VAZNO!!! Parametre mijenjamo tako sto napravimo objekat i u malim zagradama unosimo vrijednos stringa, intidzera ili oboje zajedno
// Na taj nacin smo automatski unijeli nove vrijendosti parametara
  Klasa objekat("Milos Veiki", 33);
  objekat.izvjestaj();
// Nakon unosenja vrijednosti pozivamo funkciju "izvjestaj" i na taj nacin smo izlistali nove vrijednosti!



  return 0;
}