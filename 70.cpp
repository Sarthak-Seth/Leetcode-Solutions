class Solution 
{
public:
    
    int solve(int n,vector<int> &dp)
    {
        if(n==1) return 1;
        if(n==2) return 2;
        
        if(dp[n]!=-1)return dp[n];
        int ans = solve(n-1,dp)+solve(n-2,dp);

        return dp[n]=ans;

    }
    int climbStairs(int n)
    {
        vector<int>dp(50,-1);
        //for(int i=0;i<50;i++)dp[i]=-1;
        return solve(n,dp);
    }
};
