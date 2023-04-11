#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){
  int broj;
  //Ternary operator funkcionise na sledeci nacin:
  //Kao primjer prvo smo napravili program za unosenje brojeva
cout << "Unesi broj od 0 do 100 " << endl;
cin >> broj;
//Zatim smo napravili opetaror na sldeci nacin
//napravili smo varijablu data type string rezuzltat zatim znak jednakosti jer provjeravamo vrijednost
//U zadgari unosimo vrijednost koju provjeravamo, u ovom slucaju dali je broje apran ili neparan
//a znak jednakosti znaci da provjerava da imaostatka u dijeljenju
// ako je ostatak 0 onda je broj paran a dako je ostatak 1 onda je broj neparan!
string rezultat = (broj % 2==0) ? "Paran " : "Neparan ";
cout << "Broj je!"<<rezultat << endl;

int number;
cout << "Unesi broj! " << endl;
cin >> number;
//U ovom slucaju smo napravili provjeru da li je broj pozitivan ili negativan!
string resenje = (number > 0 ) ? "Pozitivan broj! " : "Negativan broj! " ;
cout << "Uneli ste " << resenje << endl;

  return 0;
}