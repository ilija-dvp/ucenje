#include <iostream>
#include <string>
using namespace std;


class Covjek{
public:
  string Ime;
  void PrintajIme(){

    cout << "Ime covjeka je: " << Ime << endl;
  }
  void PrintajIme2(){

    cout << "Ime drugog covjeka je: " << Ime << endl;
  }
};
int main(){

Covjek objekat;
objekat.Ime = "Milan";
objekat.PrintajIme();

Covjek objekat2;
objekat2.Ime = "Despot";
objekat2.PrintajIme2();


  return 0;
}