/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_basic_functions.cpp
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
    
    int front,back,size,capacity;

    vector<int>arr= { 2,3,4,8};
    for (int &var:arr)
        cout<<var<<" ";
    
    front=arr.front();
    back=arr.back();
    size=arr.size();
    capacity=arr.capacity();
    
    cout<<"\nFront Element = "<<front<<"\n";
    cout<<"Last Element = "<<back<<"\n";
    cout<<"Size of vector = "<<size<<"\n";
    cout<<"Capacity = "<<capacity<<"\n";

    arr.clear();
    if(arr.empty())
    {
        cout<<"Vector is empty";
    }
    return 0;
}
