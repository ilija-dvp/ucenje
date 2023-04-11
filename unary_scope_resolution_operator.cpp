#include <iostream>
using namespace std;

int temp = 50;

void print(){
  int temp = 2343;
  cout << temp << endl;
}

int main() {
  int temp = 20;
  cout << temp << endl;
  cout << ::temp << endl;

  print();
  return 0;
}