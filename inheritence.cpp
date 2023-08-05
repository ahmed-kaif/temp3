#include <bits/stdc++.h>
using namespace std;

class Father {
private:
  int money;

protected:
  int gold;

public:
  int land;
  Father() {
    money = 10;
    gold = 20;
    land = 30;
  }
};

class Son : public Father {

public:
  Son() {
    land = 89;
    gold = 22;
  }
  // money is private to Father. So it is inacessible;
  // int getMoney() { return money; }
  int getLand() { return land; }
  int getGold() { return gold; }
};
class GrandSon : public Son {
public:
  // money is private to Father. So it is inacessible;
  //   int getMoney() { return money; }
  int getLand() { return land; }
  int getGold() { return gold; }
};

int main() {
  Father f1;
  Son s1;
  GrandSon g1;
  cout << "Gold: " << endl;
  cout << "From Son: " << s1.getGold() << endl;
  cout << "From GrandSon: " << g1.getGold() << endl;

  cout << "Land: " << endl;
  cout << "From Son: " << s1.getLand() << endl;
  cout << "From GrandSon: " << g1.getLand() << endl;
  return 0;
}
