#include "iostream"
using namespace std;
#include <cctype>
int main(){
  int x=1;
  char izbor[1];

  do{

    cout << "Ucim C++. Da li zelite da izadjete iz petlje? \nda-d \nne-bilo koje sovo" << endl;
    cin>> izbor;

    if (tolower(izbor[0])== 'd'){
      x++;
    }}while(x==1);
  return 0;
}
