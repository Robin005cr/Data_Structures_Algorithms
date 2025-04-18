/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : sort_array.cpp
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
#include<algorithm>

using namespace std;

int main()
{
	int arr[5] = { 112,43,22,310,121 };

	
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Ascending order :" << endl;
	sort(arr,arr+n);
	
	for (int disp : arr)
	{
		cout << disp<< " ";
	}
	cout << endl;
	sort(arr, arr + n, greater<int>());

	cout << "Descending order :" << endl;
	for (int disp : arr)
	{
		cout << disp << " ";
	}
}
