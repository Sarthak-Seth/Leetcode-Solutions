class Solution 
{
public:
    int dp[210][210];
    
    int solve(vector<vector<int>>& g, int i , int j ,int n, int m)
    {
        if(i>n or j>m) return INT_MAX;
        //if(i<0 or j<0) return INT_MAX;
        if(i==n and j==m) return g[i][j];
        if(dp[i][j] != -1) return dp[i][j];

        //int right =  solve(g,dp,i+1,j,n,m);
        //int down =  solve(g,dp,i,j+1,n,m);

        return dp[i][j] = g[i][j] +min(solve(g,i+1,j,n,m),solve(g,i,j+1,n,m));
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        for(int i=0;i<210;i++)
            for(int j=0;j<210;j++) dp[i][j]=-1;
        int n = grid.size()-1 , m = grid[0].size()-1; 
        //dp.resize(n+10,vector<int>(m+10,-1));

        return solve(grid,0,0,n,m);
    }
};
