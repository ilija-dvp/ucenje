#include "iostream"
using namespace std;

void printajElement(int Niz[], int pozicija)

{
  cout << Niz[pozicija] << endl;
}

int main() {

  int brojevi[5] = {3, 4, 5, 6, 7};
  printajElement(brojevi, 2);

  return 0;
}