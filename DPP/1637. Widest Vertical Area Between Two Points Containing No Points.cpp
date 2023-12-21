class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> storage;
        int n=points.size();

        for(int i=0; i<n; i++){
           storage.push_back(points[i][0]);
        }

        sort(storage.begin(), storage.end());
        int maxi=INT_MIN;
        int ans;
        for(int i=0;i<storage.size()-1; i++){
            ans=(storage[i+1]-storage[i]);
            maxi=max(maxi, ans);
        }
        return maxi;
    }
};
