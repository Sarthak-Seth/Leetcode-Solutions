class Solution 
{
public:
    int dp[10010];
    int solve2(int n)
    {
        if(n==0) return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        int ans=n;
        
        for(int i=1;i*i<=n;i++)
        {
            int tmp= i*i;
            ans = min(ans,1+solve(n-tmp));
        }
        return dp[n]=ans;
    }
    int solve(int n)
    {
        dp[0]=0;
        dp[1]=1;
        
        for(int j=2;j<=n;j++)
        {
            for(int i=1;i*i<=n;i++)
            {   
                int tmp= i*i;
                if(j-tmp>=0) dp[j] = min(dp[j],1 + dp[j-tmp]);
            }
        }
        return dp[n];
        
    }
    int numSquares(int n) 
    {
        
        for(int i=0;i<10010;i++)  dp[i]=10010;
        return solve(n);
    }
};
