/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : iterators1.cpp
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
#include <list>
using namespace std;

class ObjectInfo
{
public:
    double x, y, z;

    ObjectInfo(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}
};
int main()
{
    list<ObjectInfo> objList = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    // Iterator-based loop
    for (list<ObjectInfo>::iterator it = objList.begin(); it != objList.end(); ++it)
    {
        cout << "x: " << it->x << ", y: " << it->y << ", z: " << it->z << endl;
    }

    return 0;
}
