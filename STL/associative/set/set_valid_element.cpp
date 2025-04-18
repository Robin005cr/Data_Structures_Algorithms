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
// Program to check whether the given input is valid from a set of elements

#include <iostream>
#include <set>
#include <string>

int main() {
    // Define valid class names
    std::set<std::string> validClasses = {"Temperature", "Humidity"};

    // Simulate a class name input (you could also get this from user input)
    std::string className = "Pressure";  // Example invalid input

    // Check if the class name is valid
    if (validClasses.find(className) == validClasses.end()) {
        std::cout << "Error: Unknown class name '" << className << "'." << std::endl;
        return 1;
    }

    std::cout << "Class name '" << className << "' is valid." << std::endl;
    return 0;
}
