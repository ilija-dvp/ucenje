#include "iostream"
using namespace std;
int main(){

 int var = 888;

  int &varRef = var;
  int &varRef2 = var;
  int &varRef3 = var;

  cout << varRef << endl;
  cout << varRef2 << endl;
  cout << varRef3 << endl;

  varRef2 = 333;
  cout << varRef3 << endl;
  //Promjenom bilo koje reference mijenjamo sve ostale refernce


  return 0;
}