class Solution 
{
public:
    vector<vector<int>> merge(vector<vector<int>>& i) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        sort(i.begin(),i.end());
        vector<vector<int>>ans;

        for(vector<int> &v:i)
        {
            if(!ans.size() or ans[ans.size()-1][1]< v[0]) ans.push_back(v);
            else ans[ans.size()-1][1] = max(ans[ans.size()-1][1],v[1]);
        }
        return ans;
    }
};
