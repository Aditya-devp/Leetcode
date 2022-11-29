class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> st;
        for(int i=0;i<s.length();i++){
            string word="";
            while(s[i]!=' ' && i<s.length()){
                word+=s[i];
                i++;
            }
            st.push(word);
        }
        while(st.top()==""){
            st.pop();
        }
        return st.top().length();
    }
};
