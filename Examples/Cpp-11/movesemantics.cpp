/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : movesemantics

*/

#include <iostream>
#include <string>

using namespace std;

class Token {
public:
    Token(string& tokenStr) : TokenStr(tokenStr) { }
    Token(string&& tokenStr) : TokenStr(move(tokenStr)) { }

    /* copy constructor*/
    Token(const Token& other) : TokenStr(other.TokenStr) {
        cout << "copy constructor" << endl;
    }

    /* copy assignment */
    Token& operator=(Token& other) {
        cout << "copy assignment" << endl;

        TokenStr = other.TokenStr;
        return *this;
    }

    /* move constructor */
    Token(Token&& other) : TokenStr(move(other.TokenStr)) {
        cout << "move constructor" << endl;
    }

    /* move assignment */
    Token& operator=(Token&& other) {
        cout << "move assignment" << endl;

        TokenStr = move(other.TokenStr);
        return *this;
    }

    string getTokenStr() {
        return TokenStr;
    }

private:
    string TokenStr;
};

int main()
{
    Token firstToken("GitHub");

    /* copy constructor*/
    Token secondToken(firstToken);
    /* move constructor*/
    Token thirdToken(move(firstToken));

    /* copy assignment*/
    secondToken = thirdToken;
    /* move assignment*/
    firstToken = move(thirdToken);

    return 0;
}
