/*
  Author : Vandit Maniar
  
  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : array 
  
*/

#include <iostream>
#include <array>

using namespace std;

int main() {
  array<int, 3> a({{1, 2, 3}});

  cout << "first " << a.front() << endl;
  cout << "last " << a.back() << endl;

  for(auto x : a)
    cout << x << endl;
}
