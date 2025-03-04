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
