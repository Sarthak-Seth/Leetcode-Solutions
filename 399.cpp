class Solution 
{
public:
    unordered_map<string,vector<pair<string,double>>>g;
    double dfs(string &a, string &b, unordered_set<string> &vis)
    {
        if(g.find(a) == g.end())    return -1;
        if(a == b) return 1;

        for(auto nbr:g[a])
        {
            if(vis.find(nbr.first) == vis.end())
            {
                vis.insert(nbr.first);
                double ans = dfs(nbr.first,b,vis);
                if(ans!=-1) return ans*nbr.second;
            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& v, vector<vector<string>>& que) 
    {
        vector<double>ans;
        for(int i=0;i<eq.size();i++)
        {
            g[eq[i][0]].push_back({eq[i][1],v[i]});
            g[eq[i][1]].push_back({eq[i][0],1.0/v[i]});
        }
        for(vector<string> &q:que)
        {
            unordered_set<string>vis;
            ans.push_back(dfs(q[0],q[1],vis));
        }

        return ans;
    }
};
