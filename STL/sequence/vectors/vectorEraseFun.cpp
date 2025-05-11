/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vectorEraseFun.cpp
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
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1 = {30,23,10,98,56,78,93};
    vec1.erase(vec1.begin()); // 23,10,98,56,78,93
    vec1.erase(vec1.begin(),vec1.begin()+3);  // 56,78,93
    for(auto val : vec1)
    {
        cout<<val<<" ";
    }
 
    return 0;
}