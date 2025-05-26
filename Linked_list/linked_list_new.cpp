/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : linked_list_new.cpp
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
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    // Create the first node and set its data
    Node* head = new Node();
    head->data = 45;
    head->next = nullptr; 

    // Create the second node and link it to the first node
    Node* current = new Node();
    current->data = 76;
    current->next = nullptr;
    head->next = current;
 
    delete head;
    delete current;

    return 0;
}
