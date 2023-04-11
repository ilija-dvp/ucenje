#include <iostream>
#include <string>
using namespace std; /// Shift + Alt + F


int main() {
char ch;
cout << "Unei neki karakter: " << endl;
cin >> ch;
// Provjera ASCII vrijednosti koju unesemo preko tastature
cout << "ASCII equivalent is: " << static_cast<int>(ch)<< endl;
  return 0;
}
