#include "iostream"
using namespace std;
int main(){

  int varijabla = 555;

  // Pravljenje pointera
  int *varijablaP = &varijabla;

  // Printanje adrese varijable preko pointera
   cout << "Adresa je :" << varijablaP << endl;

   //Printanje vrijednosti varijable preko pointera
    cout << "Vrednost je :" << *varijablaP << endl;

    //Prevljenje reference
    int &varijablaRef = varijabla;

    // Printanje adrese preko reference
    cout << "Vrednost preko reference je : " << varijablaRef << endl;

    //Printanje vrijednosti varijable preko reference
    cout << "Adresa preko reference je : " << &varijablaRef << endl;

    *varijablaP = 4323;

cout << "Adresa je :" << varijablaP << endl;
cout << "Vrijednost je :" << *varijablaP << endl;

varijablaRef = 111;
cout << "Vrednost preko reference je : " << varijablaRef << endl;


  return 0;
}