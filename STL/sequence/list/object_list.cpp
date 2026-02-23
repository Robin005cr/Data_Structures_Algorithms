/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : object_list.cpp
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
#include <list>
using namespace std;
class User
{
public:
    string name;
    int age;

    User(string n, int a) : name(n), age(a) {}

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Create a list of User objects
    list<User> userList;

    // Create some User objects and add them to the list
    User user1("John", 25);
    User user2("Jane", 30);
    User user3("Bob", 35);

    userList.push_back(user1);
    userList.push_back(user2);
    userList.push_back(user3);

    // Iterate over the list and display each User object
    for (auto it = userList.begin(); it != userList.end(); ++it)
    {
        it->display();
    }

    return 0;
}
