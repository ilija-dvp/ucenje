#include <iostream>
using namespace std;

int main() {
  int brojevi[5] = {4323, 45, 32, 54, 880};

  int zbir = 0;

  for (int x = 0; x < 5; x = x + 1) {
    zbir = zbir + brojevi[x];
    cout << zbir << "\t";
  }

  return 0;
}