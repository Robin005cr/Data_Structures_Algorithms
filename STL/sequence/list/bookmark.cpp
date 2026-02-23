/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : bookmark.cpp
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
#include<list>
#include <memory>
using namespace std;

class Book
{
    public:
        string book_name;
        int total_page;
        list<int> bookmark;
};
int main()
{
    Book Alchemist;
    
    Alchemist.bookmark = {12,34,56};
    
    auto it = Alchemist.bookmark.begin();
    it++; // it = 1
    
    Alchemist.bookmark.insert(it,56); // 56 will be inserted in it = 1 location
    
    for (int var : Alchemist.bookmark)
	{
		cout << var << " ";
    }
  
    return 0;
}