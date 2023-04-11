#include "iostream"
using namespace std;
int main(){

  int var=888;
  // Referenca ili nickname varijable
  // Promjenom varijable ili reference mijenjamo vrijednost varijable
  // Ampersent & je kljuc pravljenja reference ( int & referenca )
  //varRef je referenca ili nadimak varijable. Moze da bude bilo koje ime!

int &varRef = var;
cout << varRef << endl;
//Promjena varijable
var = 444;
cout << varRef << endl;
// Druga promjena varijabel
varRef = 333;
cout << var << endl;
cout << varRef << endl;

  return 0;
}