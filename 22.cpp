class Solution 
{
public:
    vector<string>ans;
    void solve(string s, int l, int r )
    {
        if(l == 0 and r == 0) 
        {
            ans.push_back(s); 
            return ;
        }
        if(l>0) solve(s+'(',l-1,r);
        if(r>l) solve(s+')',l,r-1);
    }
    vector<string> generateParenthesis(int n) 
    {
        solve("",n,n);
        return ans;
    }
};
