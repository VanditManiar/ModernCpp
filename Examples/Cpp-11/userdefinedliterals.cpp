/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : userdefinedliterals

*/

#include <iostream>

using namespace std;

class Inch*
{
public:
    explicit Inch() : Inch(0) { }
    explicit Inch(double value) : Value(value) { }

    double toCentimeter() const {
        return Value * 2.54;
    }

private:
    double Value = 0;
};

Inch operator "" _inch(long double arg)
{
    return Inch(arg);
}

int main()
{
    cout << (1.5_inch).toCentimeter() << " centimeter" << endl;
    return 0;
}
