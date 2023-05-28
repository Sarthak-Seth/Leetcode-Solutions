class Solution 
{
public:
    int solve(vector<int>& p,int i, bool buy , int k,vector<vector<int>>&dp)
    {
        if(i>p.size()-1 or k<1) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];

        if(buy) return dp[i][buy] = max(-p[i]+solve(p,i+1,0,k,dp),solve(p,i+1,1,k,dp));
        else return dp[i][buy] = max(p[i]+solve(p,i+1,1,k-1,dp),solve(p,i+1,0,k,dp));

    
    } 
    int maxProfit(vector<int>& prices) 
    {
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return solve(prices,0,1,1,dp);
    }
};
