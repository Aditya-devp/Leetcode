class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<nums.size();i++){
    ans^=(nums[i]^i);
        }
        ans^=(n);
        return ans;
    }
    
};
