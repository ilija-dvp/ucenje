#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){
  double angle_1, angle_2, angle_3, sum;
  
  cout << "Enter three angles of triangle:" << endl;
  cin >> angle_1;
  cin >> angle_2;
  cin >> angle_3;
  sum = angle_1 + angle_2 + angle_3;
  
  if (sum == 180){
    cout << "Triangle is valid! " << endl;
  }
  else {
    cout << "Triangle isn't valid! " << endl;
  }
  
  
  


  return 0;
}