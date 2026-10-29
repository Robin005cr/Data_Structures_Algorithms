/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : deque_operations.cpp
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
#include <deque>

int main()
{
    std::deque<int> dq;

    // Insert at both ends
    dq.push_back(10); // [10]
    dq.push_back(20); // [10, 20]
    dq.push_front(5); // [5, 10, 20]
    dq.push_front(1); // [1, 5, 10, 20]

    // Print using range-based for
    std::cout << "Deque: ";
    for (int x : dq)
        std::cout << x << " ";
    std::cout << "\n";

    // Access elements
    std::cout << "Front: " << dq.front() << "\n";
    std::cout << "Back: " << dq.back() << "\n";
    std::cout << "dq[2]: " << dq[2] << "\n";       // random access
    std::cout << "dq.at(1): " << dq.at(1) << "\n"; // bounds-checked

    // Remove from both ends
    dq.pop_front(); // removes 1
    dq.pop_back();  // removes 20

    std::cout << "After pops: ";
    for (int x : dq)
        std::cout << x << " ";
    std::cout << "\n";

    // Insert and erase in the middle
    dq.insert(dq.begin() + 1, 99); // [5, 99, 10]
    dq.erase(dq.begin());          // [99, 10]

    std::cout << "After insert/erase: ";
    for (int x : dq)
        std::cout << x << " ";
    std::cout << "\n";

    std::cout << "Size: " << dq.size() << "\n";
    std::cout << "Empty? " << (dq.empty() ? "yes" : "no") << "\n";

    dq.clear();
    std::cout << "After clear, size: " << dq.size() << "\n";

    return 0;
}