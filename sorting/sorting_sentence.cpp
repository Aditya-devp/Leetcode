class Solution {
public:
  string sortSentence(string s) {
        string ans="";
        map<int,string>m;
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            temp+=s[i];
            if(s[i]>='1'&&s[i]<='9')
            {
                int x=int(s[i]);
                temp.erase(temp.begin()+temp.size()-1);
                m[x]=temp;
                temp.clear();
                i++;
            }
        }
        for(auto itr:m)
        {
            ans+=itr.second;
            ans+=' ';
        }
        ans.erase(ans.begin()+ans.size()-1);
        return ans;
        
    }
};
