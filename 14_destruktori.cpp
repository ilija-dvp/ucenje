#include <iostream>
using namespace std;
class Klasa{
public:
  ~Klasa(){
    cout << "Destruktor" << endl;
  }

  Klasa(){
    cout << "Konstrktor" << endl;
  }
//Destruktori se prave na zavrsetku radnje, konstruktor otvara radnju a destruktor zatvara. on se uvijek zadnji izvrsava
  //bez obzira na kom bio mjestu.
  //Izmedju konstruktora i destruktora se izvrsi niz drugih radnji koje su unesene u klsi.
  //Destruktor se pravi isto kao i konstruktor samo sto ispred imena konstruktora stoji valovita crta ~
};
int main(){
Klasa();


  return 0;
}