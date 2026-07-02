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
#include <queue>
#include <iostream>

int main() {
    std::priority_queue<int> pq;  // max-heap by default

    // push — insert element, O(log n)
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // top — access largest element, O(1)
    std::cout << pq.top() << "\n";  // 30

    // pop — remove largest element, O(log n)
    pq.pop();
    std::cout << pq.top() << "\n";  // 20

    // size
    std::cout << pq.size() << "\n"; // 3

    // empty
    std::cout << pq.empty() << "\n"; // 0 (false)

    // drain the queue
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    // 20 10 5
}