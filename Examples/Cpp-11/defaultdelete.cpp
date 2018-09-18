/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : defaultdelete

*/

class A
{
public:
    A() = default; /* explicit default constructor */
    A& operator=(const A&) = delete;
    A(const A&) = delete;

    void func(double);
    void func(int) = delete;
};

int main()
{
    A a;

    /* compile time error a.func(3);
    main.cpp: In function ‘int main()’:
    main.cpp:23:11: error: use of deleted function ‘void A::func(int)’
     a.func(3);
             ^
    main.cpp:16:10: note: declared here
       void func(int) = delete;
            ^~~~
    */
    a.func(3);

    return 0;
}
