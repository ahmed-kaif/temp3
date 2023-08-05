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
  ~A() { cout << "Class A destroyed." << endl; }
  int get_ax() { return ax; }
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
  int get_bx() { return bx; }
};
class C : public A {
private:
  int cx;

public:
  C() {
    cx = 3;
    cout << "Class C Constructor Called." << endl;
  }
  ~C() { cout << "Class C Destroyed." << endl; }
  int sum() { return get_ax() + cx; }
};

int main() {
  C c;
  cout << "Sum: " << c.sum() << endl;
}