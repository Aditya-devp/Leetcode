class Solution {
public:
    int calculate(string s) {
       
        stack<int>st;
       int currentnumber=0;
       char opr='+';
       
       for(int i=0;i<s.length();i++){
           char currentchar=s[i];
           if(isdigit(currentchar)){
               currentnumber=(currentnumber*10)+(currentchar-'0');
           }
           if(!isdigit(currentchar) && !isspace(currentchar)||i==s.length()-1){
               if(opr=='-'){
                   st.push(-currentnumber);
               }
               else if(opr=='+'){
                   st.push(currentnumber);
               }
               else if(opr=='*'){
                   int stacktop=st.top();
                   st.pop();
                   st.push(stacktop*currentnumber);

               }
               else if(opr=='/'){
                   int stacktop=st.top();
                   st.pop();
                   st.push(stacktop/currentnumber);
               }
               opr=currentchar;
               currentnumber=0;
           }
       }
       int result=0;
       while(!st.empty()){
           result+=st.top();
           st.pop();

       }
       return result;


    }
};
