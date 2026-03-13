/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : count_if.cpp
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
#include <algorithm>
#include <vector>
using namespace std;
bool IsEven(int n)
{
    return n%2 == 0;
}
int main() 
{
    vector<int> num = {10, 12, 43, 56, 76,887 ,97 ,23 ,55};

    auto evenCount = count_if(num.begin(),num.end(),IsEven);
    cout<<"The even count in the vector is "<<evenCount;
    return 0;
}
