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

class C : public A {};

class D : public B, public C {
public:
  // x is inaccessible in D
  // void accX() { cout << "X from C: " << x << endl; }
  // y is inaccessible in D
  void accY() {
    C::y = 29;
    cout << "Y from C: " << C::y << endl;
  }
  // z is Ambiguous in D
  void accZ() {
    B::z = 32;
    cout << "Z from B: " << B::z << endl;
  }
};

int main() {
  D d;
  d.accY();
  d.accZ();

  return 0;
}