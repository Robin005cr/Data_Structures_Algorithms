/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vectorInsertfun.cpp
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
    vector<int> vec1 = {30,23,10,98};
    vec1.insert(vec1.begin(),100);    // 100,30,23,10,98
    vec1.insert(vec1.begin()+2, 555); // 100,30,555,23,10,98 
    vec1.insert(vec1.begin(),4,999);  // 999,999,999,999,100,30,555,23,10,98
    cout<<"vec1: ";
    for(auto val : vec1)
    {
        cout<<val<<" ";
    }
    cout<<endl<<"vec2: ";
    vector<int> vec2 = {10,23,44};
    
    
    vec2.insert(vec2.begin(),vec1.begin(),vec1.begin()+2);
    for(auto val : vec2)
    {
        cout<<val<<" ";
    }
    return 0;
}