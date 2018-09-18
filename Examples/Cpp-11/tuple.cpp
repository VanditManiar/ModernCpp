/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : Tuple

*/

#include <iostream>
#include <tuple>

using namespace std;

/*
 * Composition is now a tuple with an int as the fixed first type
 * see also the default function templates example
 */

template <class ... Types>
using Composition = tuple<int, Types ...>;

int main() {

    Composition<float, string> composition(1, 2.3f, "name");

    cout << get<0>(composition) << endl;  // 1
    cout << get<1>(composition) << endl;  // 2.3
    cout << get<2>(composition) << endl;  // name
}
