class Solution 
{
public:
    map<int,int>m;
    int n;
    vector<int>num;
    vector<int>dp;
    // int solve(int i)
    // {
    //     if(i > n - 1) return 0;
    //     if(dp[i]!=-1) return dp[i];

    //     int notPick = solve(i+1);
    //     int pick    = num[i]*m[num[i]];

    //     if (i < n - 1 and num[i + 1] == num[i]+1) pick += solve(i+2);
    //     else if (i < n - 1 and num[i + 1] != num[i]+1) pick += solve(i+1);

    //     return dp[i]=max(pick,notPick);    

    // }
    int deleteAndEarn(vector<int>& v) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        for(int i:v)m[i]++;
        for(auto &i:m)num.push_back(i.first);

        n = num.size();
        dp.resize(n+1,0);
        for(int i=n-1;i>-1;i--)
        {
            int notPick = dp[i+1];
            int pick    = num[i]*m[num[i]];

            if (i < n - 1 and num[i + 1] == num[i]+1) pick += dp[i+2];
            else if (i < n - 1 and num[i + 1] != num[i]+1) pick += dp[i+1];

            dp[i]=max(pick,notPick);
        }

        return dp[0];
    }
};