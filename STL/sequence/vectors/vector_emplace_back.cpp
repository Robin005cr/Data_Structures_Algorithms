/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_emplace_back.cpp
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
    vector<int> myVec = {2,3,4};
    
    myVec.emplace_back(33);
    myVec.emplace_back(56);
    myVec.emplace_back(22);
    
    
    for(auto num : myVec)
    {
        cout<<num<<endl;
    }

    return 0;
}
