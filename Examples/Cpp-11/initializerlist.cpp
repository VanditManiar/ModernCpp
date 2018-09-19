/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : initializerlist

*/

#include <iostream>

using namespace std;

int sum(const std::initializer_list<int>& list);

int main()
{
    auto list = { 1, 2, 3 };

    cout << sum(list) << endl;
    cout << sum({1,8,5,7,9}) << endl;

    return 0;
}

int sum(const std::initializer_list<int>& list)
{
    int total = 0;
    for (auto& e : list)
    {
        total += e;
    }
    return total;
}

