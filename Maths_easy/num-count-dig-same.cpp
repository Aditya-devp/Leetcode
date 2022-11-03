class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>m;
        for(auto it:num){
            m[it]++; // store the count of numbers
        }
        for(int i=0;i<num.size();i++){
            char ch=i+'0';
            if(num[i]!=m[ch]+'0'){ // check if the count is equal to the count of numbers
                return false;
            }
        }
        return true;
        
    }
};
