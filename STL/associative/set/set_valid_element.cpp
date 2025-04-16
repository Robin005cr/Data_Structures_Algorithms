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
