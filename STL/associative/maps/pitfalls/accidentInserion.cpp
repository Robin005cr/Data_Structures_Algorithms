/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : accidentInserion.cpp
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
#include <map>
using namespace std;

int main()
{
    map<int, string> myMap;
    cout << myMap[5] << endl;                   // Inserts {5 , ""}
    cout << " Size : " << myMap.size() << endl; // Size will become 1

    map<int, string> myMap_;
    if (myMap_.find(5) != myMap_.end())
    {
        cout << myMap_[5] << endl;
    }
    else
    {
        cout << "Key does not exist !" << endl;
    }

    return 0;
}