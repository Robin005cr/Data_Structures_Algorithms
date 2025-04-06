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
