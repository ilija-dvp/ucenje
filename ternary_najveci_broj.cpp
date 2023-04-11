#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){
int a, b, c, rezultat;
cout << "Odredjivanje najveceg broja: " << endl;
  cout << "Unesite 3 razlicita broja: " << endl;
cin >>a>>b>>c;

rezultat = (a > b && a >c ) ?a : (b>c )?b :c;

cout << "Najveci broje je: " <<rezultat<< endl;



  return 0;
}