/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : CircularQueue.cpp
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
using namespace std;

class CircularQueue {
    int start, end;
    static const int size = 5;
    int queue[size];

public:
    CircularQueue() : start{-1}, end{-1} {}

    bool isFull() {
        return (start == (end + 1) % size);
    }

    bool isEmpty() {
        return (start == -1);
    }

    void push_write_produce(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (isEmpty()) {
            start = end = 0;
        } else {
            end = (end + 1) % size;
        }

        queue[end] = element;
    }

    void pop_read_consume() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        if (start == end) {
            // Queue has one element
            start = end = -1;
        } else {
            start = (start + 1) % size;
        }
    }

    void getFirst() {
        if (!isEmpty()) {
            cout << "First element: " << queue[start] << endl;
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    void getLast() {
        if (!isEmpty()) {
            cout << "Last element: " << queue[end] << endl;
        } else {
            cout << "Queue is empty" << endl;
        }
    }
};
int main()
{
    CircularQueue cq;
    cq.push_write_produce(10);
    cq.push_write_produce(90);
    cq.push_write_produce(20);
    cq.push_write_produce(99);
    cq.push_write_produce(87);
    cq.pop_read_consume();
    cq.push_write_produce(66);
    
    return 0;
}