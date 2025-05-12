/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : stack_initial.cpp
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
#include <stack>
using namespace std;
int main()
{
    stack<int> timeH;
    timeH.push(12);
    timeH.push(9);
    timeH.push(6);
    cout << "Size of stack:" << timeH.size() << endl;
    cout << timeH.top() << endl;

    timeH.pop();
    cout << timeH.top() << endl;

    if (!timeH.empty())
    {
        cout << "stack is not empty" << endl;
    }
    else
    {
        cout << "stack is empty" << endl;
    }
    return 0;
}