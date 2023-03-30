
class Solution {
public:
    int numSquares(int n) {
        int memo[n+1];
        memset(memo, 0, sizeof(memo));
        return rec(n, memo);
    }
    
    int rec(int n, int memo[]) {
        if (n < 0) return INT_MAX;
        if (n == 0) return 0;
        if(memo[n] > 0) return memo[n];
        int minVal = n;
        for (int i=1;i*i<=n;i++) {
            minVal = min(rec(n-(i*i), memo), minVal);
        }
        memo[n] = minVal+1;
        return minVal+1;
    }
};
