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
