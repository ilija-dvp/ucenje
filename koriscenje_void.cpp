#include <iostream>
using namespace std;

void Print();
int main(){
  int i;

  for (i=1; i <= 8; i++){
    Print();
    cout << endl;}
  return 0;}
void Print(){
  int j;
  for (j = 1; j <= 3; j++)
cout << 'X';

  return ;
}