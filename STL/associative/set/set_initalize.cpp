#include <iostream>
#include <set>
using namespace std; 
int main()
{
    set<int> val = {6, 10, 5, 1};

    set<int> val1 ; // defining an empty set
    val1 = {6, 10, 5, 1};
 
    for (auto& num : val) 
    {
       cout << num << ' ';
    }
   
    return 0;
}