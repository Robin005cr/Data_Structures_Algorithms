/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : mapOfStruct.cpp
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
struct Person {
    int age;
    std::string city;
};

int main() {
    map<std::string, Person> people;

    people["Alice"] = {30, "New York"};
    people["Bob"] = {25, "San Francisco"};

    for (auto val : people) {
        cout << val.first << ": " << val.second.age << " years old from " << val.second.city << "\n";
    }

    return 0;
}
