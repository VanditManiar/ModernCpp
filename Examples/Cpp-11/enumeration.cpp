/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : enumeration

*/

#include <iostream>

using namespace std;

/* type-safe enumeration, underlying type can be overridden */
enum class Direction : unsigned int {
    North,
    East,
    South,
    West
};

enum class Navigation : unsigned int {
    North = 5,
    East,
    South,
    West
};

int main()
{
    Direction driving = Direction::North;

    if(driving == Direction::North)
        cout << "dragons ahead" << endl;

    Navigation navigation = Navigation::North;

    /* compile Type error for if(navigation == Direction::North)
    main.cpp:45:17: error: no match for ‘operator==’ (operand types are ‘Navigation’ and ‘Direction’)
     if(navigation == Direction::North)
        ~~~~~~~~~~~^~~~~~~~~~~~
    main.cpp:45:17: note: candidate: operator==(Direction, Direction) <built-in>
    main.cpp:45:17: note:   no known conversion for argument 1 from ‘Navigation’ to ‘Direction’
    main.cpp:45:17: note: candidate: operator==(Navigation, Navigation) <built-in>
    main.cpp:45:17: note:   no known conversion for argument 2 from ‘Direction’ to ‘Navigation’
    */
    if(navigation == Direction::North)
        cout << "dragons ahead" << endl;

}
