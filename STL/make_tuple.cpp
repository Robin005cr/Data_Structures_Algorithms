#include <iostream>
#include <tuple>
#include <string>
using namespace std;
int main()
{
    
    auto myTuple = std::make_tuple(1, 2.5, std::string("Hello"));

    int myInt = std::get<0>(myTuple);          // myInt = 1
    double myDouble = std::get<1>(myTuple);    // myDouble = 2.5
    std::string myString = std::get<2>(myTuple); // myString = "Hello"

    cout << "Tuple contains: " << myInt << ", " << myDouble << ", " << myString << endl;
return 0;
}
