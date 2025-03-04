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
		cout << var.first << " " << var.second << endl;
	}
}
int main()
{
	vector<int>arr = { 3,22,32,3,2,4,4,4,4 };

	freqOfElement(arr);


	return 0;
}
