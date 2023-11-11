class Solution {
    void dfs(unordered_map<long long,bool>&vis,int i, unordered_map<long long,vector<long long>>&adj, vector<int>&ans){
        vis[i]=1;
        ans.push_back(i-1e5);
        for(auto j:adj[i]){
            if(!vis[j]){
                dfs(vis, j, adj,ans);
            }
        }
    }
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int>ans;
        unordered_map<long long ,int>cnt;
        unordered_map<long long,vector<long long>>adj;
        for(auto j:adjacentPairs){
            int a=j[0]+1e5;
            int b=j[1]+1e5;
            adj[a].push_back(b);
            adj[b].push_back(a);
            cnt[a]++;
            cnt[b]++;
        }
        int start=-1;
        for(auto i:cnt){
            if(i.second==1)start=i.first;
        }
        unordered_map<long long, bool>vis;
        dfs(vis, start,adj,ans); 


        return ans;
    }
};
