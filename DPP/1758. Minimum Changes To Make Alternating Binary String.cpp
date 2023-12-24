class Solution {
public:
    int minOperations(string s) {
       
        int s1=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]=='0'){
                    s1++;
                }
                
            }
            else{
                if(s[i]=='1'){
                    s1++;
                }
                
            }

        }
        return min(s1,n-s1);
    }
};
