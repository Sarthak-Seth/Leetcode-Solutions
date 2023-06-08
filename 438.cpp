class Solution 
{
public:
    int sv[26]={0};
    int pv[26]={0};
    vector<int>ans;
    bool check()
    {
        for(int i=0;i<26;i++)
        {
            if(sv[i]!=pv[i])return false;
        }
        return true;
    }
    vector<int> findAnagrams(string &s, string &p) 
    {

        int ssize=s.size();
        int psize=p.size();

        if(ssize<psize)return ans;

        for(int i=0;i<psize;i++)
        {
            sv[s[i]-'a']++;
            pv[p[i]-'a']++;
        }

        if(check())ans.push_back(0);
        for(int i=psize;i<ssize;i++)
        {
            sv[s[i-psize]-'a']--;
            sv[s[i]-'a']++;
            if(check()) ans.push_back(i-psize+1);
        }
        return ans;
    }
};
