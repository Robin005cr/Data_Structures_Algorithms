/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : MostOccurElem.cpp
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
	int max = 0;
	int highFreqElement = -1;
	for (int num : arr)
	{
		elementFreq[num]++;

		if (elementFreq[num] > max)
		{
			max = elementFreq[num];
			highFreqElement = num;
		}
	}
	cout << highFreqElement;
	
}
int main()
{
	vector<int>arr = { 32,32,3,2,4,3,3 };

	freqOfElement(arr);


	return 0;
}
