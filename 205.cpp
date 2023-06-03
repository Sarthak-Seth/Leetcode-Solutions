class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char>m;
        unordered_map<char,bool>vis;

        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i]) != m.end())
            {
                if(m[s[i]] != t[i]) return false;
            }
            else
            {
                if(vis[t[i]]) return false;
                m[s[i]] = t[i];
                vis[t[i]]=1;
            }
        }
        //for(pair<char,char>p:m)cout<<p.first<<"->"<<p.second<<endl;
        return true;
    }
};
