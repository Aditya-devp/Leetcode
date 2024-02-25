#include <bits/stdc++.h> 
// memo approach
// int rec(int idx,vector<int>&heights,vector<int>&dp){
//     if(idx==0)return 0;
//     if(dp[idx]!=-1)return dp[idx];

//     int left=rec(idx-1,heights,dp)+abs(heights[idx]-heights[idx-1]);
//     int right=INT_MAX;
//     if(idx>1){
//         right=rec(idx-2,heights,dp)+abs(heights[idx]-heights[idx-2]);
//     }
//     return dp[idx]=min(left,right);
// }
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1);
    dp[0]=0;
    
    for(int i=1;i<n+1;i++){
       int first=dp[i-1]+abs(heights[i]-heights[i-1]);
       int sec=INT_MAX;
        if(i>1)
        { sec=dp[i-2]+abs(heights[i]-heights[i-2]);}
        dp[i]=min(first,sec);
    }

    return dp[n-1];
}
