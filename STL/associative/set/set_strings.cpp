#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    // Create a set of strings
    std::set<std::string> mySet;

    // Insert elements into the set
    mySet.insert("apple");
    mySet.insert("banana");
    mySet.insert("Grapes");  // Capital letters will be in first
    mySet.insert("cherry");
    mySet.insert("banana");  // Duplicate, will not be added again
    mySet.insert("Cherry");
    // Display elements in the set
    cout << "Set contents:\n";
    for (const string& item : mySet) {
        cout << item << endl;
    }

    return 0;
}