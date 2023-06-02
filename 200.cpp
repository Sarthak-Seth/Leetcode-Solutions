class Solution 
{
public:
    int n,m;
    void dfs(int row , int col , vector<vector<int>> &vis , vector<vector<char>>& g)
    {
        vis[row][col]=1;
        int del[] = {0,1,0,-1,0};

        for(int k=0;k<4;k++)
        {
            int nRow = row + del[k];
            int nCol = col + del[k+1];

            if(nRow > -1 and nCol > -1 and nRow < n and nCol < m and !vis[nRow][nCol] and g[nRow][nCol] == '1')
            {
                vis[nRow][nCol] = 1;
                dfs(nRow,nCol,vis,g);
            }
        } 
    }
    // void bfs(int i , int j , vector<vector<int>> &vis , vector<vector<char>>& g)
    // {
    //     vis[i][j]=1;
    //     queue<pair<int,int>>q;
    //     q.push({i,j});

    //     while(!q.empty())
    //     {
    //         int row  = q.front().first;
    //         int col  = q.front().second;
    //         q.pop();

    //         int del[] = {0,1,0,-1,0};

    //         for(int k=0;k<4;k++)
    //         {
    //             int nRow = row + del[k];
    //             int nCol = col + del[k+1];

    //             if(nRow > -1 and nCol > -1 and nRow < n and nCol < m and !vis[nRow][nCol] and g[nRow][nCol] == '1')
    //             {
    //                 vis[nRow][nCol] = 1;
    //                 q.push({nRow,nCol});
    //             }
    //         } 
    //     }
    // }
    
    int numIslands(vector<vector<char>>& g) 
    {
        n = g.size(); m = g[0].size();
        int ans = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j] == '1' and !vis[i][j])
                {
                    ans++;
                    dfs(i,j,vis,g);
                } 
            }
        }
        return ans;
    }
};
