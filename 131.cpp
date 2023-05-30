class Solution 
{
public:
    vector<vector<string>>ans;
    vector<string>v;
    bool check(string &s,int l,int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r]) return false;
            l++;r--;
        }
        
        return true;
    }
    void solve(string &s,int idx)
    {
        if(idx==s.size())
        {
            ans.push_back(v); return;
        }
        for(int i=idx;i<s.size();i++)
        {
            if(check(s,idx,i))
            {
                v.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        solve(s,0);
        return ans;
    }
};
