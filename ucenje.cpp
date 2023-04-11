#include <ctime>
#include "iostream"
using namespace std;
int main(){
  srand(time(0));

  int pokusaj;
  int pogadjanja;
  int zadani_broj = rand()&10;

  cout << "Igra pogadjanja" << endl;


  do {
    cout << "Unesite vas broj" <<endl;
    cin >> pokusaj;
    pogadjanja++;
    if ( pokusaj == zadani_broj){
      cout << "Cestitam, pogodili ste broj" << endl;
      cout << "Iskoristili ste " << pogadjanja << " pokusaja! " << endl;
      break;
    }
    if(pokusaj < zadani_broj){
      cout << "Unijeli ste manji brij! " << endl;

    }
    if ( pokusaj > zadani_broj){
      cout << "Unijeli ste veci vroj! " << endl;
    }
    if ( pogadjanja > 9){
      cout << "Iskoristii ste maksimalan broj pokusaja!" << endl;
      break;
    }

  }    while (pogadjanja <= 10);



  return 0;
}
