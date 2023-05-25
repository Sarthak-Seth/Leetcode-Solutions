class Solution
{
public:
    bool solve(vector<vector<char>>& b, string &w,int i,int j,int k)
    {
        if(k==w.size()) return true;
        
        if(i < 0 || i >= b.size() || j < 0 ||j >= b[0].size()  ) return false;
        
        bool res = false;
        
        if(b[i][j] == w[k])
        {
            char temp = b[i][j];
            
            b[i][j] = '.';
            
            res = solve(b,w,i+1,j,k+1) || solve(b,w,i,j+1,k+1) || solve(b,w,i-1,j,k+1) ||solve(b,w,i,j-1,k+1);
            
            b[i][j] = temp;
        }
        return res;
    }
    bool exist(vector<vector<char>>& board, string word)
    {
        
        bool ans=false;
        int k=0;
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                if(solve(board,word,i,j,k)) ans = true;
        
        return ans;
    } 
};
