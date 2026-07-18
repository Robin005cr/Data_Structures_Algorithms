/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : RepeatingElements.cpp
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
#include<unordered_map>
#include<vector>
using namespace std;
void freqOfElement(vector<int>& arr)
{	

	unordered_map<int, int> elementFreq;
	bool repeatFlag = false;
	for (int num : arr)
	{
		elementFreq[num]++;
	}

	for (auto var : elementFreq)
	{
		if (var.second > 1)
		{
			cout << var.first << endl;
			repeatFlag = true;
		}
	}
	if(!repeatFlag)
	{
		cout << "No Duplicate/repated values" << endl;	
	}
}
int main()
{
	vector<int>arr = { 22,32,3,2,4 };

	freqOfElement(arr);


	return 0;
}
