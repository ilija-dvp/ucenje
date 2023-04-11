#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){

  int Marko, Ratko, Gavrilo, oldest;
  
  cout << "Enter age of three guys: " << endl;
  cout <<"Gavrilo's age : " << endl;
  cin >> Gavrilo;
  cout << "Marko's age : " << endl;
  cin >> Marko;
  cout << "Ratko's age: " << endl;
  cin >> Ratko;
  
  if (Gavrilo > Marko && Gavrilo > Ratko){
    cout << "The oslest is Gavrilo! : " << Gavrilo << endl;
  }
  if (Marko > Ratko && Marko > Gavrilo){
    cout << "The oldest is Marko! : " << Marko << endl;
  }
  if(Ratko > Gavrilo && Ratko > Marko){
    cout << "The odest is Ratko : " << Ratko << endl;
  }
  
  
  
  
  
  
  
  


  return 0;
}