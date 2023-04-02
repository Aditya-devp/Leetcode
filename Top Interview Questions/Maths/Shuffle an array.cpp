class Solution {
public:
vector<int>orignal;
int n;
    Solution(vector<int>& nums) {
     orignal=nums;
        n=nums.size();
    }
    
    vector<int> reset() {
       return orignal;
    }
    
    vector<int> shuffle() {
        vector<int>shuffled=orignal;
        int back=n;
        for(int i=n-1;i>0;i--){
            int j=rand()%back;
            swap(shuffled[i],shuffled[j]);
            back--;
        }
return shuffled;
    }
};
