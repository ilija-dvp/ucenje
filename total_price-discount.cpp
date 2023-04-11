#include <iostream>
using namespace std;
// Shift + Alt + F
int main() {

  int price, quantity, total_amount, discount;

  cout << "Enter price: " << endl;
  cin >> price;

  cout << "Enter quantity: " << endl;
  cin >> quantity;

  total_amount = price * quantity;

  if (total_amount > 500) {

    cout << "Total expensis is: " << total_amount << endl;
    discount = (total_amount * 0.1);
    total_amount = total_amount - discount;
    cout << "Total expensis with discount is: " << total_amount << endl;
    cout << "Total discount is: " << discount << endl;
  } else {
    cout << "Total expensis is: " << total_amount << endl;
    cout << "You didn't get enu discount! " << endl;
  }

  return 0;
}