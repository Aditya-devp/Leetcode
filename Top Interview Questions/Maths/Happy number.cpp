class Solution {
public:
int hello(int n){
    int ans=0;
        while(n){
            int a=n%10;
            ans+=a*a;
            n=n/10;

        }
        return ans;
}
   bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow=hello(slow);
            fast=hello(hello(fast));
        }while(slow!=fast);
        return slow==1;

       
    }
};
