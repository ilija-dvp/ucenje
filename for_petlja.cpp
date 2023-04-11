#include "iostream"
using namespace std;
int main() {

  // For petlja se koristi kada unaprijed znamo broj ponavljanja i osigutava nas
  // od besonacne petje jer je u uslovu vec odredjen broj ponavljanja (u ovom
  // slucaju 5)
  for (int i = 5; i > 1; i--) {
    cout << i << " Pozdrav!" << endl;
  }

  return 0;
}