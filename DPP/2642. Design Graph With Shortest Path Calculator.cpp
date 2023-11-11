class Graph {
public:
    int N = 0;
    vector<vector<pair<int, int>>>adj;
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);
       
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
        }
        N = n;
    }

    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1], edge[2]});
    }

    int shortestPath(int node1, int node2) {
        int src = node1;
        vector<int> dist(N, 1000000000);
        dist[src] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});

        while (pq.size()) {
            auto z = pq.top();
            pq.pop();
            int distanceSofar = z.first;
            int node = z.second;
            for (auto child : adj[node]) {
                int childNode = child.first;
                int addeddistance = child.second;
                if (addeddistance + distanceSofar  < dist[childNode]) {
                    dist[childNode] = addeddistance + distanceSofar;
                    pq.push({dist[childNode], childNode});
                }
            }
        }
        return dist[node2] == (1000000000) ? -1 : dist[node2];
    }
};
