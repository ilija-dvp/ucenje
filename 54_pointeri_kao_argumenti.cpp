#include <iostream>
using namespace std;
//1.Prvo napravimo funkciju
void kvadriranje(int *xPtr);

int main() {

int neki_broj = 10;
cout << "Adresa nekog boja je:" << &neki_broj << endl;

//3.Pozivamo funkciju da izvrsi radnju
kvadriranje(&neki_broj);
cout << "Vrednost NB posle operacije je:" << neki_broj << endl;

kvadriranje(&neki_broj);
cout << "Vrednost NB posle operacije je:" << neki_broj << endl;


  return 0; }
//2.Pozivamo funkciju da definisemo sta ona radi
void kvadriranje(int *xPtr) {

  cout << "Adresa je :" << xPtr << endl;
  cout << "Vrednost pre operacije:" << *xPtr << endl;

  *xPtr = *xPtr * *xPtr;

}
