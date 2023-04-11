#include <iostream>
using namespace std;
//Prelepljivanje funkcija ako imaju ista imena.
//Na ovaj nacin smo prelijepili primarnu klasu sa sekundarnom ako imaju iste nazive funkcuja/metoda
//Kada izvrsimo program dobicemo parametre iz sekundarne klase.
class Primarna{
  public:
    void istaMetoda(){
      cout << "Ja sam iz primarne klase! " << endl;
    }
};
class Sekundarna : public Primarna{
  public:
    void istaMetoda(){
      cout << "Ja sam iz sekundarne klase! " << endl;
    }
};
int main(){
Sekundarna obj;
obj.istaMetoda();
obj.istaMetoda();


  return 0;
}