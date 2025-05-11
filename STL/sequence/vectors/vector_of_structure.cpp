/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_of_structure.cpp
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
#include <vector>

struct Student {
    std::string name;
    int age;
    float grade;
};

int main() {
    std::vector<Student> students;

    // Adding students to the vector
    students.push_back({"Alice", 20, 89.5});
    students.push_back({"Bob", 22, 76.0});

    // Iterating over the vector
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << ", Age: " << student.age 
                  << ", Grade: " << student.grade << std::endl;
    }

    return 0;
}
