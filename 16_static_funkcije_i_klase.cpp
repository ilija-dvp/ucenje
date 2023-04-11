#include <iostream>
#include <string>
using namespace std;

class Klasa{
public:

  static int brojac;
  Klasa(){
    cout << "Trenutna vrijednost brojaca je: " << ++brojac << endl;
  }

  static void statikFunkcija(){
    cout <<"Druga vrijednost: " << ++brojac << endl;
  }
};

int Klasa :: brojac = 0;

int main(){
//U ovom primjeru smo ubacili i jenu static funkciju.
//Star je u tome da static funkciju mozemo pozvati na dva nacinaa to je:
//Preko objekta u preko scope(::) kao sto se moze vidjeti u primjerima ispod.
  Klasa obj;
  obj.statikFunkcija();

Klasa :: statikFunkcija();

  return 0;
}