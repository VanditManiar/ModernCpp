/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : Lambda Function

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isMax(int a, int b)
{
    return a > b;
}

void printVector(auto v)
{
    for(auto x : v)
        cout << x << endl;
}

int main()
{
    vector<int> v({6, 1, 8, 2, 7, 9});

    printVector(v);

    /* sort by Function Pointer */
    sort(v.begin(), v.end(),&isMax);

    cout << "reverse sorted:" << endl;
    printVector(v);

    vector<int> v1({5, 11, 8, 4, 7, 2});

    /* sort by lambda */
    sort(v1.begin(), v1.end(), [](int a, int b) {
        return a > b;
    });

    cout << "reverse sorted:" << endl;
    printVector(v1);
}
