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
class B {
private:
  int p;

protected:
  int q;

public:
  int r;
};
class C : public A, public B {
public:
  // x is inaccessible in C
  // void accX() { cout << "X from B: " << x << endl; }
  void accY() {
    y = 2;
    cout << "Y from C: " << y << endl;
  }
  void accZ() {
    z = 3;
    cout << "Z from C: " << z << endl;
  }
  // p is inaccessible in C
  //   void accP() { cout << "P from C: " << p << endl; }
  void accQ() {
    q = 4;
    cout << "Q from C: " << q << endl;
  }
  void accR() {
    r = 5;
    cout << "R from C: " << r << endl;
  }
};

int main() {
  C c;
  // c.accX();
  c.accY();
  c.accZ();
  // c.accP();
  c.accQ();
  c.accR();

  return 0;
}