#include <iostream>
#include <tuple>
#include <string>
using namespace std;
int main()
{
    
   std::tuple<int, char, float> myTuple(42, 'c', 3.14f);

    int myInt = std::get<0>(myTuple);          
    char myChar = std::get<1>(myTuple); 
    float myFloat = std::get<2>(myTuple);

    cout << "Tuple contains: " << myInt << ", " << myChar << ", " << myFloat << endl;
return 0;
}
