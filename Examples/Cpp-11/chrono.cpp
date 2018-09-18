/*
  Author : Vandit Maniar

  Easy-Way-Of-Exploring-Cpp/ModernCpp
  C++ 11 Example : chrono

*/

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {

    const chrono::seconds sec(chrono::hours(1) + chrono::minutes(54) + chrono::seconds(8));
    cout << "1h 54m 8s = " << sec.count() << "s" << endl;

    /* get the duration of a section */
    const auto start(chrono::steady_clock::now());
    this_thread::sleep_for(chrono::seconds(3));
    const auto end(chrono::steady_clock::now());

    chrono::nanoseconds duration(end - start);

    cout << "duration of section: " << duration.count() << " ns"<< endl;
    cout << "duration of section: " << chrono::duration_cast<chrono::microseconds>(duration).count() << " ms"<< endl;

    return 0;
}
