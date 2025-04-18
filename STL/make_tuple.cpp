/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : set_valid_element.cpp
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
    
    auto myTuple = std::make_tuple(1, 2.5, std::string("Hello"));

    int myInt = std::get<0>(myTuple);          // myInt = 1
    double myDouble = std::get<1>(myTuple);    // myDouble = 2.5
    std::string myString = std::get<2>(myTuple); // myString = "Hello"

    cout << "Tuple contains: " << myInt << ", " << myDouble << ", " << myString << endl;
return 0;
}
