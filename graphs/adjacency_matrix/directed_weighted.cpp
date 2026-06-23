/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : directed_weighted.cpp
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
    int V = 3; // number of vertices

    vector<vector<int>> adj(V, vector<int>(V, 0));

    // Add edges (directed graph)
    adj[0][1] = 8;
    adj[1][2] = 9;

    // Print adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
