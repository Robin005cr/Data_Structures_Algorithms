/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_reserve.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "Initial: size=" << vec.size() << ", capacity=" << vec.capacity() << '\n';  // 0, 0

    vec.reserve(10);  // Reserve space for 10 ints
    cout << "After reserve(10): size=" << vec.size() << ", capacity=" << vec.capacity() << '\n';  // 0, >=10

    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    cout << "After 10 push_backs: size=" << vec.size() << ", capacity=" << vec.capacity() << '\n';  // 10, >=10 (no realloc)
}
