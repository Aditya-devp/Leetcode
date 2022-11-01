class Solution {
public:
    int smallestEvenMultiple(int n) {
        int gcd;
        for(int i=1;i<=2&&i<=n;i++){
            if(2%i==0&&n%i==0){
                gcd=i;
            }
        }
        int ans=(2*n)/gcd;
        return ans;
    }
};
