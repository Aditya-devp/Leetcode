class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool dec=true;
        bool inc=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])inc=false;
            if(nums[i]>nums[i-1])dec=false;

            if(!dec and !inc) break;
        }

        return inc||dec;


        
       
        
    }
};
