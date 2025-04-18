/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_basic_operations.cpp
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
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }
  
  // add the integers 6 and 7 to the vector
  num.push_back(6);
  num.push_back(7);

  cout << "\nUpdated Vector after insertion:  ";

  for (const int& i : num) {
    cout << i << "  ";
  }
  //delete the last element
  num.pop_back();
  
  cout << "\nUpdated Vector after deletion:  ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  return 0;
}
