#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;
//Shift + Alt + F

const double centimeters_per_inch= 2.54;
const int inchis_per_foot = 12;


int main(){
  
  int feet, inches;
  int total_Inches;
  double centimeter;
  
  cout << "Enter two integers, one for feet and one for inches: " << endl;
  cin >> feet >> inches;
  cout << endl;
  
  cout << "You entered two values: " << feet << " for feets and " << inches << " for inches." << endl;
  
  total_Inches = inchis_per_foot * feet + inches;
  
  cout << "The total value of inches is: " << total_Inches << endl;
  
  centimeter = centimeters_per_inch * total_Inches;
   cout << "The total value of centimter is: " << centimeter <<endl;
  

  

  return 0;
}