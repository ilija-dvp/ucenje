#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {

  srand(time(0));
  int a = rand();
  int x = 0;

  for (x; x <= 2; x++) {

    cout << a << endl;
  }
  return 0;
}