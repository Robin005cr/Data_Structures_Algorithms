/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : mapAsReturnType.cpp
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
#include <string>
using namespace std;
map<string, int> updateTimeDetails()
{
    map<string, int> report;
    
    report["startTime"] = 12;
    report["endTime"] = 8;
    return report;
}

int main() 
{
    
    map<string, int> reportList = updateTimeDetails();
    
    for(auto val: reportList)
    {
        cout<<val.first<<":"<<val.second ;
    }
    
    return 0;
}
