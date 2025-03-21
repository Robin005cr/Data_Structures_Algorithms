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
