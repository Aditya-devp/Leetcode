class Solution {
public:
bool ispal(int n){
    
    long long rev=0,dig=n;
    while(n>0){
        rev=n%10+rev*10;
        n=n/10;
    }
    return(rev==dig);
}
    bool isPalindrome(int x) {
        return ispal(x);
    }
};
