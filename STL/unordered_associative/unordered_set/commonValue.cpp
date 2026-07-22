/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : commonValue.cpp
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
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> vec1 = {23, 77, 88, 45};
    vector<int> vec2 = {21, 23, 48, 77};
    unordered_set<int> mySet(vec1.begin(), vec1.end());
    vector<int> result;

    for (int val : vec2)
    {
        if (mySet.erase(val))
        {
            result.push_back(val);
        }
    }
    for (int var : result)
    {
        cout << var << " ";
    }
    return 0;
}