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
  ~A() { cout << "Class A Destroyed." << endl; }
  int get_ax() { return ax; }
};
class B : public A {
private:
  int bx;

public:
  B() {
    bx = 2;
    cout << "Class B Constructor Called" << endl;
  }
  ~B() { cout << "Class B Destroyed." << endl; }
  int sum() { return get_ax() + bx; }
};

int main() {
  B b;
  cout << "Sum: " << b.sum() << endl;
  return 0;
}