#include <iostream>
using namespace std;
//Ovde cemo objasniti dijamant nasledjivanje
//napravili smo 4 klase u kojoj sekundarne nasledjuju od primarne a tercijarna nasledjuje od sekundarnih
class Primarna_a{
  public:
    void osnovnaFunkcija(){
      cout << "Ja sam string iz primarne klase. " << endl;    }
};
class Sekundarn_b : public virtual Primarna_a{
};
class Sekundarna_c : public virtual  Primarna_a{
};
class Trcijarna : public Sekundarn_b, public Sekundarna_c{

};
int main(){
  //Ako hocemo da napravimo objekat za tercijrnu kasu i da pozovemo funkciju iz primarn eklase
  //To nece raditi. moramo da kod nasledjivanja ipred primarne ubacimo kljucnu rijec virtual
  //Na taj nacin smo rijesili problem i mozemo pozvati funkciju iz primarne klase preko tercijarne klase.

Trcijarna obj;
obj.osnovnaFunkcija();

  return 0;
}