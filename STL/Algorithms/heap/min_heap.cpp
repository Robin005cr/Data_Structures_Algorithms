/*
 * project   : https://github.com/Robin005cr/Data_Structures_Algorithms
 * file name : min_heap.cpp
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
#include <algorithm>
#include <vector>
#include <functional> // std::greater
#include <iostream>

int main()
{
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};

    // make_heap with greater<> → min-heap
    std::make_heap(v.begin(), v.end(), std::greater<int>());
    std::cout << "Min after make_heap: " << v.front() << "\n"; // 1

    // push_heap — same pattern, just pass the same comparator
    v.push_back(0);
    std::push_heap(v.begin(), v.end(), std::greater<int>());
    std::cout << "Min after pushing 0: " << v.front() << "\n"; // 0

    // pop_heap — moves min to back
    std::pop_heap(v.begin(), v.end(), std::greater<int>());
    std::cout << "Min moved to back: " << v.back() << "\n"; // 0
    v.pop_back();
    std::cout << "New min: " << v.front() << "\n"; // 1
}