// Using .at() and [] brackets

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num = {11, 32, 36, 47, 55};

  cout << "Element at Index 0: " << num.at(0) << endl;
  cout << "Element at Index 2: " << num.at(2) << endl;
  cout << "Element at Index 4: " << num[4]<<endl;
  num.at(2) = 78;
  num[4] = 56;
  cout<<"After updation\n";
  cout << "Element at Index 2: " << num.at(2) << endl;
  cout << "Element at Index 4: " << num[4]<<endl;

  return 0;
}
