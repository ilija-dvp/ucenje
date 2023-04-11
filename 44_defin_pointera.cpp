#include "iostream"
using namespace std;
int main(){

  int Number = 4323;
//Pravljenje pointera
  int *ptrNumber = &Number;

  //Upotreba adrese pointera
    cout << ptrNumber << endl;
    //-----------------------------------
    // Sa zvjezdicom
    //Upotreba vrijednosti pointera (varijable)
    cout << *ptrNumber << endl;



  return 0;
}