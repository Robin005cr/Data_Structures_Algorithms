#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> myset = {5, 2, 9, 1};

    // Using a print iterator to display the set elements
    for (auto it = myset.begin(); it != myset.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}