#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {

  int h, m, s, a, err;
  err = a = 0;
  while (err == 0) {
    cout << "Enter hour :" << endl;
    cin >> h;
    cout << "Enter minutes :" << endl;
    cin >> m;
    cout << "Enter seconds :" << endl;
    cin >> s;
    if (h < 23 && m < 60 && s < 60)
      err++;
    else
      system("clear");
  }
  while (a == 0) {
    system("clear");
    cout << h << ":" << m << ":" << s << endl;
    s++;
    if (s > 59) {
      s = 0;
      m++;
    }
    if (m > 59) {
      m = 0;
      h++;
    }
    if(h > 23) { h = 0; }
  }
  return 0;
}