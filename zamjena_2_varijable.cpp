#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){
int a, b;

cout << "Unesite dva broja: " ;
cin >> a >> b;

a = b+a;
b = a - b;
a = a - b;
cout << "Brojevi nakon zamjene varijabli: " << endl;
cout << a <<"  " << b << endl;





  return 0;
}