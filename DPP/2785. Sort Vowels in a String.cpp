class Solution {
public:
    string sortVowels(string s) {
        string p;
        for(int x=0;x<s.length();x++)
        {
         if (s[x] == 'a' || s[x] == 'e' ||s[ x] == 'i' || 
       s[ x] == 'o' || s[x] == 'u' || s[x] == 'A' || 
       s[ x] == 'E' || s[x] == 'I' ||s[ x] == 'O' || s[x] == 'U'){
              p+=s[x]; 
          s[x]='0';
                
         }    
            
        }
        sort(p.begin(),p.end());
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]=p[a];
                a++;
            }
        }
        return s;
    }
};
