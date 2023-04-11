#include <iostream>
using namespace std;
// Shift + Alt + F
int main() {
  int cost_price, selling_price, profit, loss;

  cout << "Enter cost price: " << endl;
  cin >> cost_price;

  cout << "Enter selling price: " << endl;
  cin >> selling_price;

  profit = selling_price - cost_price;
  loss = cost_price - selling_price;

  if (selling_price > cost_price) {
    cout << "You got profit : " << profit << endl;
  }
  if (cost_price > selling_price) {
    cout << "You loss: " << loss << endl;
  }
  if (cost_price == selling_price) {
    cout << "No loss, no profit! " << endl;
  }

  return 0;
}