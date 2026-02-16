/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_resize.cpp
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
int main()
{
    vector<int> vec = {1, 2, 3};
    cout << "Before resize: ";
    for (int n : vec) cout << n << ' ';
    cout << "\nSize: " << vec.size() << '\n';  // Output: 3

    vec.resize(5, 10);  // Grow to 5 elements, fill new ones with 10
    cout << "After increasing the size(5, 10): ";
    for (int n : vec) cout << n << ' ';
    cout << "\nSize: " << vec.size() << '\n';
    
    vec.resize(2);
    cout << "After decreasing the size: ";
    for (int n : vec) cout << n << ' ';
    cout << "\nSize: " << vec.size() << '\n';
   
    return 0;
}
