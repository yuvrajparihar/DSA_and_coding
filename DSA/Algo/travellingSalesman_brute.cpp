#include <bits/stdc++.h>
using namespace std;


int main(){
   freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
   freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);

   int l=4;
    int graph[][l] = { { 0, 4, 1, 3 },
                       { 4, 0, 2, 1 },
                       { 1, 2, 0, 5 },
                       { 3, 1, 5, 0 } };
    int start = 0;
   

   vector<int> vertex;
    for (int i = 0; i < l; i++)
        if (i != start)
            vertex.push_back(i);
 
    int min_cost = INT_MAX;
    do {
 
        int weight = 0;
 
        int k = start;
        for (int i = 0; i < vertex.size(); i++) {
            weight += graph[k][vertex[i]];
            k = vertex[i];
        }
        weight += graph[k][start];
 
        min_cost = min(min_cost, weight);
 
    } while (
        next_permutation(vertex.begin(), vertex.end()));
 
    cout<<min_cost;
    return 0;

}

