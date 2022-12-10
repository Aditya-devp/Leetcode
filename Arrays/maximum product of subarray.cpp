class Solution {
public:
    int maxProduct(vector<int>& nums) {
     if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        int currmin=1,currmax=1,res=INT_MIN;
        for(int i=0; i<nums.size();++i){
            int temp=currmin;
            currmin=min(min(temp*nums[i],currmax*nums[i]),nums[i]);
            currmax=max(max(temp*nums[i],currmax*nums[i]),nums[i]);
            res=max(res,currmax);
            
        }
        return res;   
    }
};
