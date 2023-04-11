#include <iostream>
using namespace std;

int main() {
  int multi[2][3] = {{5, 6, 7}, {8, 9, 10}};
  for (int red = 0; red < 2; red = red + 1) {
    for (int kolona = 0; kolona < 3; kolona = kolona + 1) {

      cout << multi[red][kolona] << "\t";
    }
    cout << "-" << endl;
  }
  return 0;
}
