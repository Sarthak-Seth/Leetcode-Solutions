class Solution 
{
public:
    int n ,m;
    void bfs(vector<vector<char>>& g,vector<vector<int>> &vis ,int i , int j)
    {
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j] = 1;

        int del[] ={0,1,0,-1,0};
        while(!q.empty())
        {
            pair<int,int> curr = q.front();
            i = curr.first;
            j = curr.second;
            q.pop();

            for(int k=0;k<4;k++)
            {
                int nr = i + del[k];
                int nc = j + del[k+1];

                if(nr>-1 and nc>-1 and nr<n and nc <m and !vis[nr][nc] and g[nr][nc] == 'O')
                {
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
    }
    // void dfs(vector<vector<char>>& g,vector<vector<int>> &vis ,int i , int j)
    // {
    //     vis[i][j] = 1;

    //     int del[] ={0,1,0,-1,0};
    //     for(int k=0;k<4;k++)
    //     {
    //         int nr = i + del[k];
    //         int nc = j + del[k+1];

    //         if(nr>-1 and nc>-1 and nr<n and nc <m and !vis[nr][nc] and g[nr][nc] == 'O') dfs(g,vis,nr,nc);
    //     } 

    // }
    void solve(vector<vector<char>>& g) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        n = g.size();
        m = g[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++)//row
        {
            if(!vis[i][0] and g[i][0] == 'O') bfs(g,vis,i,0);
            if(!vis[i][m-1] and g[i][m-1] == 'O')bfs(g,vis,i,m-1);
        }
        for(int i=0;i<m;i++)//col
        {
            if(!vis[0][i] and g[0][i] == 'O') bfs(g,vis,0,i);
            if(!vis[n-1][i] and g[n-1][i] == 'O')bfs(g,vis,n-1,i);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] and g[i][j] == 'O') g[i][j] ='X';
            }
        }
    }
};
