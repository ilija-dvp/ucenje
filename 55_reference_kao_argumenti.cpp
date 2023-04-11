#include <iostream>
using namespace std;

void kvadriranje(int &xRef);
int main(){

  int neki_broj = 10;
cout << "Adresa NB je:" << &neki_broj << endl;
cout << "Vrednost NB prije operacije " << neki_broj << endl;

kvadriranje(neki_broj);
cout <<"Vrednost posle funkcije " << neki_broj << endl;
cout << "Adresa posle operacije" << &neki_broj << endl;


  return 0;
}
//pravljenje operacije
void kvadriranje(int &xRef){
  cout << "Adresa je: " << &xRef << endl;
  xRef = xRef * xRef;
}