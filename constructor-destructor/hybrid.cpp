#include <iostream>
using namespace std;
class A {
private:
  int ax;

public:
  A() {
    ax = 1;
    cout << "Class A Constructor Called." << endl;
  }
  ~A() { cout << "Class A Destroyed." << endl; }
};
class B : public A {
private:
  int bx;

public:
  B() {
    bx = 2;
    cout << "Class B Constructor Called." << endl;
  }
  ~B() { cout << "Class B Destroyed." << endl; }
};

class C : public A {};

class D : public B, public C {
public:
};

int main() {
  D d;

  return 0;
}