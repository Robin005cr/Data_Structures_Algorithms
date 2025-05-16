/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_fixed_size.cpp
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
/*
num[5] = 6; will not check for array of bound
num.(5) = 6; will check for array of bound, the program will not crash, it will raise an exception
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num(5);
  num = {11, 32, 36, 47, 55};
  
  num[5] = 6;
  cout<<num[5];
  //num.at(5) = 65;
  return 0;
}