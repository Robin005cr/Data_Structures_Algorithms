/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : vector_reference.cpp
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

struct SenDat {
    string timeStamp;
    int value;
};

// Function to load sensor1 data into combine
void loadSensor1(vector<SenDat>& combine, const vector<SenDat>& sensor1) {
    combine.insert(combine.end(), sensor1.begin(), sensor1.end());
}

// Function to load sensor2 data into combine
void loadSensor2(vector<SenDat>& combine, const vector<SenDat>& sensor2) {
    combine.insert(combine.end(), sensor2.begin(), sensor2.end());
}

int main() {
    vector<SenDat> sensor1 = {{"2", 34}, {"4", 56}, {"6", 67}};
    vector<SenDat> sensor2 = {{"3", 34}};
    
    vector<SenDat> combine;

    // Call functions in any order, both will update combine
    loadSensor1(combine, sensor1);
    loadSensor2(combine, sensor2);

    // Display the combined data
    for (const auto& entry : combine) {
        cout << "Timestamp: " << entry.timeStamp << ", Value: " << entry.value << endl;
    }

    return 0;
}
