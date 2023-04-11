#include "iostream"
using namespace std;
int main(){

  int x;
  cout << "Unesite broj manji od 5: " ;
cin >> x;
if (x<5){
  cout << "Uneli ste broj manji od 5." << endl;
}

if(x>5){
  cout << "Uneli ste broj veci od 5!" << endl;
}
else{
  cout << "Uneli ste ne vazecu kombinaciju!" << endl;
}
cout << "Kraj programa!" << endl;


  return 0;
}