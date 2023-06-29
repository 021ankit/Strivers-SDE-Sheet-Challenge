#include <bits/stdc++.h> 
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int>dist(n+1,1e9);
    dist[src]=0;
    for(int j=1; j<n; j++)
    {
      for (int i = 0; i < m; i++) {
        int u = edges[i][0], v = edges[i][1], w = edges[i][2];
        if (dist[u] != 1e9 && dist[u] + w < dist[v])
          dist[v] = dist[u] + w;
      }
    }
    return dist[dest];
}
