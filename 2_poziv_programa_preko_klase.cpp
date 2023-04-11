#include "iostream"
using namespace std;

//Otvaranje programa preko klase
//Napravi se klasa, ime klase
// U funkciju void upisujemo komandu "system" i ime programa, u ovom slucaju 'Opera'
 class pozovanjePrograma{
   public:
     void otvoriProgram(){
       system("opera");
     }
 };


int main(){
//Zatim pozovemo klasu u mejnu, napravimo objekat i program ce se otvoriti
pozovanjePrograma objekat_otvori;
objekat_otvori.otvoriProgram();


  return 0;
}