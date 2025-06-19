/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_bug.cpp
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
int main()
{
    vector<int> myvec(5);

    int input;

    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        myvec.push_back(input);
    }

    for (auto val : myvec)
    {
        cout << val << " ";
    }

    return 0;
}