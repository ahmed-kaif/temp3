#include <iostream>
using namespace std;
class A {
private:
  int x;

protected:
  int y;

public:
  int z;
};
class B : public A {
public:
  // x is inaccessible in B
  // void accX() { cout << "X from B: " << x << endl; }
  void accY() {
    y = 20;
    cout << "Y from B: " << y << endl;
  }
  void accZ() {
    z = 30;
    cout << "Z from B: " << z << endl;
  }
};

int main() {
  B b;
  // b.accX();
  b.accY();
  b.accZ();

  return 0;
}