/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : sort_vector.cpp
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
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> dataContainer = { 112,43,22,310,121 };

	cout << "Ascending order :" << endl;
	sort(dataContainer.begin(), dataContainer.end());
	
	for (int disp : dataContainer)
	{
		cout << disp<< " ";
	}
	cout << endl;
	sort(dataContainer.begin(), dataContainer.end(), greater<int>());

	cout << "Descending order :" << endl;
	for (int disp : dataContainer)
	{
		cout << disp << " ";
	}
}
