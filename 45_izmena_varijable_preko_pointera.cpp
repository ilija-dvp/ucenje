#include "iostream"
using namespace std;
int main(){

int Number = 100;

cout << Number << endl;

Number = 200;

cout << Number << endl;

int *ptrNumber = &Number;
cout << ptrNumber << endl;

*ptrNumber = 300;
cout << *ptrNumber << endl;
cout << Number << endl;


  return 0;
}