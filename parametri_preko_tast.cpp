#include <iostream>
using namespace std;
void unesi_parametar(int x);
int main() {
  int x;
  cout << "Molimo unesite broj: " << endl;
  cin >> x;
  unesi_parametar(x);

  return 0;
}
void unesi_parametar(int x) { cout << "Uneti broj je: " << x << endl; }