#include <iostream>
using namespace std;

void printaj(int a){
  cout << a << endl;
}
void printaj(char a){
  cout << a << endl;
}

int main() {

  int x = 6245;
  char c = 'Z';

  printaj(c);
  printaj(x);
  return 0;
}