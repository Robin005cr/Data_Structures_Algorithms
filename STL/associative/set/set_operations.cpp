/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : set_operations.cpp
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
#include <set>
using namespace std;

int main()
{
    set<int> myset = {5, 2, 9, 1};

    // Acessing elements: Note index access won't work in sets

    auto itr = next(myset.begin(), 2); // internally it will store as [1,2,5,9]
    cout << *itr << endl;
    // myset.begin() returns an iterator to the first element
    // next(myset.begin(), 2) advances the iterator by two positions
    // The value pointed to by the iterator is printed

    // Deleting elements

    myset.erase(5); // this will return an iterator 1 if its able to erase it successfully
    return 0;
}