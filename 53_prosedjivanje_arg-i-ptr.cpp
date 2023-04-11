#include "iostream"
using namespace std;
int kvadriranje(int x);
int main(){
int bilo_koji_broj = 15;

cout << "Adresa BKB je :" << &bilo_koji_broj<< endl;
cout << "Kvadrat BKB je :" << kvadriranje(bilo_koji_broj) <<endl;
cout << bilo_koji_broj << endl;


  return 0;
}
int kvadriranje(int x){
  cout << "Adresa x-a je:" << &x << endl;
  x = x * x;
  return x;
}