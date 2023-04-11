#include "iostream"
using namespace std;
int main(){

int niz[3] = {22, 33, 44};
//Nulovanje pointera ( nema potrebe )
int *nizPtr = NULL;


    nizPtr = niz;

    for (int i = 0; i < 3; i = i + 1){
      // Stampanje adrese niza
      cout << "Adresa je: " << nizPtr <<endl;
      // Stampanje vrednosti niza ( sa zvezdicom * )
      cout << "Vrednost je: " << *nizPtr << endl;
nizPtr++;
    }



  return 0;
}