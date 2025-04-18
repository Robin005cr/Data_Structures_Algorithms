/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : set_strings.cpp
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
#include <string>
using namespace std;
int main() {
    // Create a set of strings
    std::set<std::string> mySet;

    // Insert elements into the set
    mySet.insert("apple");
    mySet.insert("banana");
    mySet.insert("Grapes");  // Capital letters will be in first
    mySet.insert("cherry");
    mySet.insert("banana");  // Duplicate, will not be added again
    mySet.insert("Cherry");
    // Display elements in the set
    cout << "Set contents:\n";
    for (const string& item : mySet) {
        cout << item << endl;
    }

    return 0;
}