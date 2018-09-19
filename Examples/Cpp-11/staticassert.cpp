/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : staticassert

*/

int main()
{
    /* compile time assertions */
    static_assert(sizeof(char) == 1, "char assert went wrong");
    static_assert(sizeof(int) == 4, "int assert went wrong");
    static_assert(sizeof(double) == 8, "double assert went wrong");

    return 0;
}
