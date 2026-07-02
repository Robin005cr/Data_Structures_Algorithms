/*
 * project   : https://github.com/Robin005cr/Data_Structures_Algorithms
 * file name : max_heap.cpp
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
#include <iostream>

int main()
{
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};

    // make_heap — O(n), rearranges range into a valid heap
    std::make_heap(v.begin(), v.end());
    std::cout << "Max after make_heap: " << v.front() << "\n"; // 9
    // v itself is NOT sorted — it's just heap-ordered
    // e.g. v might look like: 9 6 4 1 5 3 2 1

    // push_heap — add new element at the END first, then call push_heap
    v.push_back(10);
    std::push_heap(v.begin(), v.end());                         // O(log n)
    std::cout << "Max after pushing 10: " << v.front() << "\n"; // 10

    // pop_heap — moves max to the END (v.back()), does NOT remove it
    std::pop_heap(v.begin(), v.end());                      // O(log n)
    std::cout << "Max moved to back: " << v.back() << "\n"; // 10
    v.pop_back();                                           // actually remove it — YOU must do this
    std::cout << "New max: " << v.front() << "\n";          // 9
}