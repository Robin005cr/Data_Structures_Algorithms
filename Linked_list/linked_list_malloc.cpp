/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : linked_list_malloc.cpp
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

int main()
{
    struct Node
    {
        int data;
        struct Node* next;
    };
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 45;
    head->next = NULL;
    
    struct Node* current = (struct Node*)malloc(sizeof(struct Node));
    current->data = 76;
    current->next = NULL;
    head->next = current;
    
    return 0;
}
