#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() 
{
    vector<int> num = {10,12,43,56,76};
    auto itr = find(num.begin(),num.end(),12);
    if(itr == num.end())
    {
        cout<<"Element is not found";
    }
    else
    {
        cout<<"Index :"<<itr-num.begin();
    }
    

    return 0;
}