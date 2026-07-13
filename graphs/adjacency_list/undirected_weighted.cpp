/*
 * project   : https://github.com/Robin005cr/Data_Structures_Algorithms
 * file name : undirected_weighted.cpp
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
#include <vector>
#include <iostream>
using namespace std;

class Graph
{
    int n;
    vector<vector<int>> adj; // adj[u] = {v1, w1, v2, w2, ...}

public:
    Graph(int n) : n(n), adj(n) {}

    void addEdge(int u, int v, int weight)
    {
        adj[u].push_back(v);
        adj[u].push_back(weight);

        adj[v].push_back(u); // undirected: add reverse edge too
        adj[v].push_back(weight);
    }

    void printGraph()
    {
        for (int u = 0; u < n; u++)
        {
            cout << u << ": ";
            for (int i = 0; i < (int)adj[u].size(); i += 2)
            {
                int neighbor = adj[u][i];
                int weight = adj[u][i + 1];
                cout << "(" << neighbor << ", w=" << weight << ") ";
            }
            cout << "\n";
        }
    }
};
