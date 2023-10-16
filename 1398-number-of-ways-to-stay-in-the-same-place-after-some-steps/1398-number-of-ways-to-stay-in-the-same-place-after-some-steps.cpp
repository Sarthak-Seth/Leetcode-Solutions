class Solution 
{
public:
    int m = 1e9+7;
    int dp[510][510];
    int solve(int i, int s, int n)
    {
        if(i < 0 or i > n) return 0;
        if(!s) return !i;
        if(dp[i][s] != -1) return dp[i][s];

        long long ans = 0ll+solve(i,s-1,n)%m + solve(i+1,s-1,n)%m + solve(i-1,s-1,n)%m;

        return dp[i][s] = ans%m;
 
    }
    int numWays(int s, int n) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(0,s,n-1);
    }
};