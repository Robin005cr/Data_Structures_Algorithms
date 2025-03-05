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
