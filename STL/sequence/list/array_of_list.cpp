/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : array_of_list.cpp
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

int main()
{
    int size = 10;
    list<int>* obstacleList;

    // list<int> obstacleList[size];   This is valid but many instances we get value during run time
    obstacleList = new list<int>[size];

    // Adding elements
    for (int i = 0; i < size; i++)
    {
        // Add some sample elements to each list
        obstacleList[i].push_back(i);
        obstacleList[i].push_back(i * 10);
        obstacleList[i].push_back(i * 100);
    }

    // Printing elements
    for (int i = 0; i < size; i++)
    {
        cout << "List " << i << ": ";

        for (int val : obstacleList[i])
        {
            cout << val << " ";
        }

        cout << endl;
    }

    // Free memory
    delete[] obstacleList;

    return 0;
}