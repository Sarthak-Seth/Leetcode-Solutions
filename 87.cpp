class Solution 
{
public:
    unordered_map<string,bool>mp;
    bool isScramble(string s1, string s2) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        if(s1 == s2) return 1;
        if(s1.size() == 1) return 0;

        string key = s1+" "+s2;

        if(mp.find(key)!=mp.end()) return mp[key];
        for(int i=1;i<s1.size();i++)
        {
            if(isScramble(s1.substr(0,i),s2.substr(0,i)) and isScramble(s1.substr(i),s2.substr(i))) return mp[key] = 1;
            
            if(isScramble(s1.substr(0,i),s2.substr(s1.size()-i)) and isScramble(s1.substr(i),s2.substr(0,s1.size()-i)))   return mp[key] = 1;
        }
        return mp[key] = 0;
    }
};
