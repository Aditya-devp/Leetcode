typedef pair<int,int> Pair;
class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source == target) return 0;

        unordered_map<int,vector<int>> stops;

        for(int i=0;i<routes.size();i++) {
            for(int route : routes[i]) {
                stops[route].push_back(i);
            }
        }        

        priority_queue<Pair,vector<Pair>,greater<>> queue;

        unordered_map<int,int> dist;

        for(int route : stops[target]) {
            queue.push(make_pair(0,route));
            dist[route] = 0;
        }

        while(!queue.empty()) {
            auto [distance,current] = queue.top(); queue.pop();

            for(int stop : routes[current]) {

                if(stop == source) return dist[current] + 1;

                for(int next : stops[stop]) {
                    if(dist.find(next) == dist.end()) {
                        dist[next] = 1 + dist[current];
                        queue.push(make_pair(dist[next],next));
                    }
                }
            }
        }
        return -1;
    }
};
