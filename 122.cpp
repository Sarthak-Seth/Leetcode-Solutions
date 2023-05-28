class Solution 
{
public:
    //int buyAns=0,notBuyAns=0;
    
    int solve(vector<int>& p,int i,bool buy,vector<vector<int>>&dp)
    {
        if(i==p.size()) return 0;

        if(dp[i][buy]!=INT_MIN) return dp[i][buy];
        
        if(buy)  return dp[i][buy]=max(0-p[i]+solve(p,i+1,0,dp),solve(p,i+1,1,dp));
        else   return dp[i][buy]=max(p[i]+solve(p,i+1,1,dp),solve(p,i+1,0,dp));

        //return max(buyAns,notBuyAns);
    }
    int maxProfit(vector<int>& prices)
    {
        vector<vector<int>>dp(prices.size(),vector<int>(2,INT_MIN));
        return solve(prices,0,1,dp);
    }
};
