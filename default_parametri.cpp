#include <iostream>
using namespace std;
void printajTBroja(int x, int y, int z = 8888);

 int main() { printajTBroja(4, 7); }
void printajTBroja(int x, int y, int z) {
  cout << "Uneti brojevi su: " << x << "-" << y <<  "-" << z << endl;
}
