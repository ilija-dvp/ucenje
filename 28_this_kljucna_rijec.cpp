#include <iostream>
using namespace std;
class Klasa {
private:
  string ime;
  // U slucaju da hocemo da koristimo isto ima za string i za varijablu tada
  // koristimo kljucnu rijec this i to radimo na sledeci nacin:
  //Prije varijable se stavi kljucna rijec this i strelica (tis->) i onda ce stvar da radi.
public:
  void setujIme(string ime) { this->ime = ime; }
  void printajIme() { cout << ime << endl; }
};

int main() {
  Klasa obj;
  obj.setujIme("Jorgovanka");
  obj.printajIme();

  return 0;
}