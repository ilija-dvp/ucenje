#include <iostream>
using namespace std;

//U ovom programu smo napravili dvje klase dva nacina devinisanja funkcije void izvan klase a prije mejna!
// Koristili smo scope resolutin operator (::)

//Pravimo klasu
class Bombarder{
public:
  //U ovom slucaju smo uzeli int jer je broj u pitanju
  int broj = 5;
  //Ovde smo samo napravili funkciju void
  void printajBroj();
};
//Nakon klase smo definisali sta radi funkcija void
//U ovom slucaju printa broj*broj
//VAZNO! u ovom slucaju definisanja funkcije spustamo void, zatim ime klase i onda koristimo ovaj opetaror (::)
//zatim spustimo funkciju i ()! I nakon toga u {} zagradama definisemo sta funkcija radi.!
void Bombarder :: printajBroj (){
  cout << broj * broj << endl;
}

// Isti postupak je ponovljen i u ovoj klasi
// Na isti nacin smo definisali funkciju void van klase a prije mejna!
//U ovom slucaju  bez pisanja komentara radi bolje preglednosti

class CrniBombader{
  public:
    string citat = "Pain is temporary!";

    void printajCitat();
};
void CrniBombader :: printajCitat(){
  cout << CrniBombader :: citat << endl;
}
int main(){
 CrniBombader objekat;
 objekat.printajCitat();

 Bombarder objekat2;
 objekat2.printajBroj();

  return 0;
}