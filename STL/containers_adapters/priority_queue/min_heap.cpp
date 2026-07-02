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
#include <queue>
#include <iostream>
using namespace std;
int main()
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // handling the min heap
    // push — insert element, O(log n)
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // top — access lowest element, O(1)
    cout << pq.top() << endl; // 5

    // pop — remove lowesr element, O(log n)
    pq.pop();
    cout << pq.top() << endl; // 10

    // size
    cout << pq.size() << endl; // 3

    // empty
    cout << pq.empty() << endl; // 0 (false)

    // drain the queue
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    // 10 20 30
}