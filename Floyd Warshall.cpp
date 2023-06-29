int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        for (int i = 0; i < n; i++)
            dist[i][i] = 0;
        for (auto i : edges) {
            int u = i[0] - 1, v = i[1] - 1, wt = i[2];
            dist[u][v] = wt;
        }

        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != 1e9 and dist[k][j] != 1e9)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
            }
        }
        return dist[src - 1][dest - 1];
}
