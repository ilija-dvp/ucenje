#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){
  //Pretvaranje Celsiusa u Farenhajte i obrnuto

  float C;
  float F;

  cout << "Unesite C ako zelite da unesete vrijednost u celsiusima : " << endl;
  cout << "Unesite F ako zelite da unesete vrijednost u Farenhajtima : " << endl;
  cout << "Vas odabir je: ";
  char izbor;
cin >> izbor;

if (tolower(izbor) == 'f') // farenhajt
{
  cout << "Unesite temperaturu u farenhajtima: ";
  cin >> F;
  C = 5*(F-32)/9;
  cout << "Tempratura u celsiusima je: " << C << endl;

}
if (tolower(izbor) == 'c') //celsius
{
  cout << "Unesite temperaturu u celziusima : " << endl;
  cin >> C;
  F = C*1.8+32;
  cout << "Temperatura u farenhajtima je :" << F << endl;

}






  return 0;
}