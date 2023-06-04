class Solution 
{
public:
    
    bool searchMatrix(vector<vector<int>>& mat, int t)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int m = mat.size();
        if (m == 0) return false;
        int n = mat[0].size();

        int i = 0, j = n - 1;
        while (i < m && j >= 0) 
        {
            if (mat[i][j] == t)return true;
            else if (mat[i][j] > t) j--;
            else i++;
        }
        return false;
    }
};
