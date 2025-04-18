/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : find_if_vector.cpp
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
    return n % 2 == 0;
}

int main() 
{
    vector<int> num = {107, 123, 43, 56, 76};
    auto itr = find_if(num.begin(), num.end(), IsEven);
    
    if (itr == num.end())
    {
        cout << "No Even elements";
    }
    else
    {
        cout << "first even elment found at Index: " << (itr-num.begin());
    }

    return 0;
}
