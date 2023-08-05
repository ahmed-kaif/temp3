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
class B : public A {};
class C : public B {
public:
  // x is inaccessible in B
  // void accX() { cout << "X from B: " << x << endl; }
  void accY() {
    y = 20;
    cout << "Y from C: " << y << endl;
  }
  void accZ() {
    z = 30;
    cout << "Z from C: " << z << endl;
  }
};

int main() {
  C c;
  // c.accX();
  c.accY();
  c.accZ();

  return 0;
}