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
