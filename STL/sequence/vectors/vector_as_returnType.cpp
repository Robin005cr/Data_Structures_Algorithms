#include <iostream>
#include <vector>
using namespace std;

vector<int> arrTovec(int arrType[], int size)
{
    vector<int> vecLocal;
    for (int i = 0; i < size; ++i)
    {
        vecLocal.push_back(arrType[i]);
    }
    return vecLocal;
}

int main()
{
    int arrType[5] = {2, 3, 4, 5, 6};
    vector<int> vecType = arrTovec(arrType, 5);
    for (auto data : vecType)
    {
        cout << data << " ";
    }
    return 0;
}
