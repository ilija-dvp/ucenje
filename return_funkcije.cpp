#include <iostream>
using namespace std;

int sabiranjeBrojeva(int x, int y);

int main() {
  int bureZArezultat = sabiranjeBrojeva( 5, 10);
  cout << "Rezultat je: " << bureZArezultat << endl;

  return 0;
}

int sabiranjeBrojeva(int x, int y) {
  int rezultat = x + y;
  return rezultat;
}