/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : upper_lower_bound.cpp
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
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1,2,4,4,4,6,8};
    

    auto lb1 = lower_bound(v.begin(), v.end(), 4);  // Element 4 at index 2
    auto lb2 = lower_bound(v.begin(), v.end(), 3);  // Element 4 at index 2, but 3 is not in vector
    auto ub1 = upper_bound(v.begin(), v.end(), 4);  // Element 6 at index 5

    cout<<"Lower Bound Index(lb1): "<< lb1 - v.begin() <<endl;
    cout<<"Lower Bound Index(lb2): "<< lb2 - v.begin() <<endl;
    cout<<"Upper Bound Index(ub1): "<< ub1 - v.begin() <<endl;
    
    
    vector<int> vec = {10, 20, 30, 40, 50};

    auto lb = lower_bound(v.begin(), v.end(), 89);
    auto ub = upper_bound(v.begin(), v.end(), 89);

    if(lb == vec.end())
        cout<<"Lower bound not found"<<endl;
    else
        cout<<"Lower bound: "<<*lb<<endl;

    if(ub == vec.end())
        cout<<"Upper bound not found"<<endl;
    else
        cout<<"Upper bound: "<<*ub<<endl;

    return 0;
}