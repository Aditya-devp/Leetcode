class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int mini=INT_MIN;
        stack<int>s;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<mini)return true;
            while(!s.empty() and s.top()<nums[i]){
                mini=s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
        
    }
};
