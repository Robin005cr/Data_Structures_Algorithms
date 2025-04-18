/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_access_elements.cpp
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
