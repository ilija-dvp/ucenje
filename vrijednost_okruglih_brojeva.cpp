#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){

int N500, N100, N50, N20, N10, N5, N1, unos;

cout << "Unesite broj: " << endl;
cin >> unos;

N500 = unos / 500;
unos = unos % 500;
N100 = unos / 100;
unos = unos % 100;
N50 = unos / 50;
unos = unos % 50;
N20 = unos / 20;
unos = unos % 20;
N10 = unos / 10;
unos = unos % 10;
N5 = unos / 5;
unos = unos %5;
N1 = unos / 1;

cout << " N500: " <<N500<< " N100: " << N100<< " N50: " << N50 <<" N20: " << N20 << " N10: " << N10 <<" N5: " << N5 << " N1: " << N1 << endl;



  return 0;
}