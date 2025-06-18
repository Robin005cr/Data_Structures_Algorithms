/*
 * project   : https://github.com/Robin005cr/Data_Structures_Algorithms
 * file name : set_initalize.cpp
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
#include <set>
using namespace std;
int main()
{
    set<int> val = {6, 10, 5, 1};

    set<int> val1; // defining an empty set
    val1 = {67, 1760, 5, 1};

    for (auto &num : val)
    {
        cout << num << ' ';
    }
    cout<<endl;
    
    set<int, greater<int>> myval = {66, 610, 5, 901};

    for (auto &num : myval)
    {
        cout << num << ' ';
    }
    return 0;
}