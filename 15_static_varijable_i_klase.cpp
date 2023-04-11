#include <iostream>
#include <string>
using namespace std;

class Klasa{
  public:
    //Staticna varijaba zadrzava svoju vrijednost i kad stavimo ++ pri svakom sledecem ponavljanju broj se uvecava za 1.
    //Staticna varijabla se pravi sa kliucnom cijeci static.
    static int brojac;
    Klasa(){
cout << "Trenutna vrijednost brojaca je: " << ++brojac << endl;
    }
};
//Kljucno za varijablu je da se koristi scope(::) van klase a prije mejna gdje unostimo ime klase pa :: pa static varijablu i tu
//definisemo njenu pocetnu vrijednost. Ne moze joj se dati vrijendost unutar klase!
int Klasa :: brojac = 0;

int main(){

Klasa obj;
Klasa obj1;
Klasa obj2;
Klasa obj3;
Klasa obj4;
return 0;
}