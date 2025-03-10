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
