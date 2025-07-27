/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : tuple.cpp
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
#include <tuple>
#include <string>
using namespace std;
int main()
{
    
   std::tuple<int, char, float> myTuple(42, 'c', 3.14f);

    int myInt = std::get<0>(myTuple);          
    char myChar = std::get<1>(myTuple); 
    float myFloat = std::get<2>(myTuple);

    cout << "Tuple contains: " << myInt << ", " << myChar << ", " << myFloat << endl;
return 0;
}
