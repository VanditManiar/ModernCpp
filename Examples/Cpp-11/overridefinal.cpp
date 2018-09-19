/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : overridefinal

*/

#include <iostream>

using namespace std;

/* use final on a class to prevent inheriting; compilation error */
class A /* final */
{
public:
    virtual void func(int) {
        cout << "A::func(int)" << endl;
    }
};

class B : A
{
public:
    /* use override to make the compiler checks that we are indeed overriding an inherited method */

    virtual void func(int) override {
        cout << "B::func(int)" << endl;
    }

    /* virtual void func(char) override {} compilation error; new method (see signature), does not override existing */
};

int main()
{
    A a;
    a.func(2);

    B b;
    b.func(3);

}
