#include <iostream>
using namespace std;
class A {
private:
  int ax;

public:
  A() {
    ax = 1;
    cout << "Class A Constructor Called" << endl;
  }
  int get_ax() { return ax; }
  ~A() { cout << "Class A Destroyed." << endl; }
};
class B : public A {
private:
  int bx;

public:
  B() {
    bx = 2;
    cout << "Class B Constructor Called" << endl;
  }
  int get_bx() { return bx; }
  ~B() { cout << "Class B Destroyed." << endl; }
};

class C : public B {
private:
  int cx;

public:
  C() {
    cx = 3;
    cout << "Class C Constructor Called" << endl;
  }
  int sum() { return get_ax() + get_bx() + cx; }
  ~C() { cout << "Class C Destroyed." << endl; }
};
int main() {
  C c;
  cout << "Sum: " << c.sum() << endl;
  return 0;
}