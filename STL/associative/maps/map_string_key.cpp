#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, string> nameElective {{"Abhishek","DSP"}, {"Venkat","Signals"},{"Ambujam","Control Systems"}, {"Aakash","Pattern Recognition"}};
    
    for(auto data :nameElective )
    {
        cout<<"Name:"<<data.first<<" Elective :"<<data.second<<endl;
    }
    return 0;
}
