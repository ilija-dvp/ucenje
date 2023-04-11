#include <iostream>
using namespace std;
// Ovde imamo funkciju iz primarne klase koja je preljepljena i u tom slucaju
// prilikom izvrsavanja programa dobijamo samo parametre iz sekundarne funkcije
//Ali ako hocemo da pozovemo preljepljenu metodu to radimo na sleldeci nacin u mejnu
class Primarna {
public:
  void istaMetoda() { cout << "Ja sam iz primarne klase! " << endl; }
};
class Sekundarna : public Primarna {
public:
  void istaMetoda() { cout << "Ja sam iz sekundarne klase! " << endl; }
};
int main() {
  Sekundarna obj;
  //U slucaju kada pozivamo preljepljenu metodu moramo posle pravjenja objekta da unesemo me klase
  // pa zatim scope(::) pa onda ime te funkcije/metode i na taj nacin smo pozvali konkreto tu metodu.
  obj.Primarna::istaMetoda();
  obj.istaMetoda();

  return 0;
}