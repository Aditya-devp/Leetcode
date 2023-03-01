class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>map={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},


        };
int ans=0;
        for(int i=0;i<s.size();i++){
            if(map[s[i]]<map[s[i+1]]){
                ans-=map[s[i]];
            }
            else{
                ans+=map[s[i]];
            }

        }
        return ans;
        
    }
};
