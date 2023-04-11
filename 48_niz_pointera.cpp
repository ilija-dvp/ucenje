#include <iostream>
using namespace std;
int main(){

    int niz[3] = {22, 33, 44};
    int *nizPtr[3];

    for(int i = 0; i < 3; i++){
      nizPtr[i] = &niz[i];
    }
    for (int i = 0; i < 3; i++){
      cout << "Adresa :" << nizPtr[i] << endl;
      cout << "Vrednost :" << *nizPtr[i] << endl;
    }


  return 0;
}