/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : map_string_key.cpp
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
    map<string, string> nameElective {{"Abhishek","DSP"}, {"Venkat","Signals"},{"Ambujam","Control Systems"}, {"Aakash","Pattern Recognition"}};
    
    for(auto data :nameElective )
    {
        cout<<"Name:"<<data.first<<" Elective :"<<data.second<<endl;
    }
    return 0;
}
