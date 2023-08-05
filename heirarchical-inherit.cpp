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
    y = 29;
    cout << "Y from B: " << y << endl;
  }
  void accZ() {
    z = 32;
    cout << "Z from B: " << z << endl;
  }
};

class C : public A {
public:
  // x is inaccessible in C
  // void accX() { cout << "X from C: " << x << endl; }
  void accY() {
    y = 29;
    cout << "Y from C: " << y << endl;
  }
  void accZ() {
    z = 32;
    cout << "Z from C: " << z << endl;
  }
};

int main() {
  B b;
  C c;
  // b.accX();
  b.accY();
  b.accZ();
  // c.accP();
  c.accY();
  c.accZ();

  return 0;
}