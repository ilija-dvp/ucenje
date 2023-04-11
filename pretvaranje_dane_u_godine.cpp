#include <iostream>
using namespace std;
//Shift + Alt + F
int main(){
  
  
int days, years, months, input;

cout << "Input nuber of days: " << endl;
cin >> input;

years = input / 365;
input = input % 365;
months = input / 30;
days = input % 30;

cout << years << " Years, " << months << " Months, " << days << " Days, " << endl;


  return 0;
}