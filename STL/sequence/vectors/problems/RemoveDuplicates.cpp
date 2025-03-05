#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void freqOfElement(vector<int>& arr)
{

	unordered_map<int, int> elementFreq;

	for (int num : arr)
	{
		elementFreq[num]++;
	}

	for (auto var : elementFreq)
	{
		if (var.second == 1)
		{
			cout << var.first << " " ;

		}
	}
}
int main()
{
	vector<int>arr = { 32,32,3,2,4,3 };

	freqOfElement(arr);


	return 0;
}
