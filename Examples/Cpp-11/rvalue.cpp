/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : rvalue

*/

/* see also the move semantic example */

#include <iostream>
#include <string>

using namespace std;

class Token
{
public:

    /* takes an lvalue reference */
    void SetToken(string& token) {
        cout << token << ", SetToken called with lvalue reference" << endl;
    }

    /* takes an rvalue reference */
    void SetToken(string&& token) {
        cout << token << ", SetToken called with rvalue reference" << endl;
    }

};

int main() {
    string token("Git-Hub");

    Token t;
    /* called with lvalue */
    t.SetToken(token);

    /* called with rvalue; temp object */
    t.SetToken(string("Git-Hub"));

    return 0;
}

