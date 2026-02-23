/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : list_basic_operations.cpp
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
#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int> myList = { 1,23,54 };
	myList.pop_front();                  // Deletes the first element [1]      --- {23,54}
	myList.push_front(421);         // Add the element in front [421]  --- { 421,23,54}
	myList.push_back(100);         // Add the element at last [100]     --- { 421,23,54,100}
	myList.push_back(200);         // Add the element at last [200]     --- { 421,23,54,100,200}
	myList.push_back(300);         // Add the element at last [300]     --- { 421,23,54,100,200,300}
	myList.pop_back();                 // Deletes the element at last [300]     --- { 421,23,54,100,200}

	for (int var : myList)
	{
		cout << var << " ";
	}

}
