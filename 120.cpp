class Solution 
{
public:
	int dp[210][210];
	int n;
	int solve(int i, int j, vector<vector<int>> &t)
	{
		if(i == n) return 0;
		if(dp[i][j] != -1) return dp[i][j];

		return dp[i][j] = t[i][j] + min(solve(i+1,j,t),solve(i+1,j+1,t));
	}
    int minimumTotal(vector<vector<int>>& t) 
	{	
		ios_base::sync_with_stdio(0);
		cin.tie(0);

		n = t.size();
		memset(dp,-1,sizeof(dp));
		return solve(0,0,t);
    }
};
