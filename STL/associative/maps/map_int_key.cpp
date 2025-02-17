#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> rollNoName {{4,"Jacqueline"}, {2,"Blake"},{1,"harry"}, {3,"Denise"}};
    
    for(auto data :rollNoName )
    {
        cout<<"Roll No:"<<data.first<<" Name :"<<data.second<<endl;
    }
    return 0;
}
