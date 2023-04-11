#include <iostream>
using namespace std;

int main() {
  int brojevi[5] = {4323, 45, 32, 54, 880};
  int x = 0;
  for (x; x < 5; x = x + 1) {
    cout << brojevi[x] << endl;
  }

  return 0;
}