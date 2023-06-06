class Solution 
{
public:
    vector<int >dp;
    long long solve(vector<int>& coins, int amt)
    {
        if(amt  == 0) return 0;
        if(dp[amt]!=-1) return dp[amt];

        long long ans = INT_MAX;
        for(int &c:coins)
        {
            if(amt - c >-1)  ans = min(ans,1+solve(coins,amt-c));
        } 
        return dp[amt]=ans;
    }
    int coinChange(vector<int>& coins, int amt) 
    {
        //int n = coins.size();
        dp.resize(amt+1);

        fill(dp.begin(),dp.end(),-1);
        int res =  solve(coins,amt);
        if(res == INT_MAX) return -1;
        else return res;
    }
};
