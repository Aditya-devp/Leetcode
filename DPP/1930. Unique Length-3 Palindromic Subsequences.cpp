class Solution {
public:
    int countPalindromicSubsequence(string s) {
         int  n=s.size();
        vector<int>f(26,1000001),last(26);
        for(int i=0;i<n;i++){
            f[s[i]-'a']=min(i,f[s[i]-'a']);
            last[s[i]-'a']=i;
        }
      int  ans=0;
      for(int i=0;i<26;i++){
          if(f[i]<last[i])
          ans+=unordered_set(begin(s)+f[i]+1,begin(s)+last[i]).size();
      }
      return ans;
    }
};
