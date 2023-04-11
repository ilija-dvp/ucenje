#include "iostream"
using namespace std;

int main(){

 int a, b, c;
 cout << "Unesite A:"<< endl;
 cin>> a;

 cout << "Unesite B: " << endl;
 cin >> b;

 c = a;
 a = b;
 b = c;
 cout << "A je: " << a << "  B je: " << b << endl;

  return 0;
}