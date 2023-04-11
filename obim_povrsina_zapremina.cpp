#include <iostream>
#include <cmath>
using namespace std;
int main(){
// U ovom slucaju gdje nam je potreban broj PI, mozemo da za pisemo M_PI ali u tom slucaju moramo
// da pozovemo heder <cmath>
//ili jednostavno da deklarisemo varijablu PI
  double r, O, P, V, h;
  cout << "Unesite vrednost poluprecnika: " << endl;
  cin >> r;
// U slucaju kvadriranja, mozemo da koristimo "pow()" u zagradi varijablu, zarez pa stepen na koji je kvadtita
  P = pow(r,2) * M_PI;
  O = 2 * r * M_PI;

  cout << "Povrsina kruga iznosi: " << P << endl;
  cout << "Obim Kruga iznosi: " << O << endl;


  cout << "Za zapreminu valjda unesite vrednst visine/duzine valjka: " << endl;
  cin >> h;
  V = r * r * M_PI * h;

  cout << "Zapremina valjka iznosi: " << V << endl;





  return 0;
}