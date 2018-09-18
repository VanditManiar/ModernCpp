/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : AliasTemplates

*/

#include <iostream>
#include <tuple>

/*
 * Composition is now a tuple with an int as the fixed first type
 * see also the default function templates example
 */

template <class ... Types>
using Composition = std::tuple<int, Types ...>;

using String = std::string;

int main()
{
    Composition<float, String> composition(1, 7.3f, "name");

    std::cout << std::get<0>(composition) << std::endl;
    std::cout << std::get<1>(composition) << std::endl;
    std::cout << std::get<2>(composition) << std::endl;

    String s{"foo"};

    std::cout << s << std::endl;

    return 0;
}
