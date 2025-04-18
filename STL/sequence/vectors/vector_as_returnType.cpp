/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_as_returnType.cpp
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
