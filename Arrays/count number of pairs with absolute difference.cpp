
    class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;
        for(const int& x : nums) {
            count += mp[x-k];
            count += mp[x+k];
            mp[x]++;
        }
        
        return count;
    }
};
