class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         map<int,int>m;
        vector<int>ans;
        for(int i = 0;i < nums.size();i++)
        {
            m[nums[i]]++;
        }
        int sum = 0;
        for(auto it = m.begin();it != m.end();it++)
        {
            int temp = it->second;
            it->second = sum;
            sum += temp;
        }
        for(int i = 0;i < nums.size();i++)
        {
            ans.push_back(m[nums[i]]);
        }
        return ans;
    }
};
