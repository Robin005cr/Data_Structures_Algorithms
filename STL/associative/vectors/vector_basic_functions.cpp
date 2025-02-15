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
