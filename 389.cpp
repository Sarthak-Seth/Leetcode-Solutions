class Solution 
{
public:
    char findTheDifference(string &s, string &t) 
    {
        vector<int>f(26,0);
        for(int i=0;i<t.size();i++)
        {
            f[t[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            f[s[i]-'a']--;
        }
        for(int i =0;i<f.size();i++)
        {
            if(f[i]) return i +'a'; 
        }
        return 'a';
    }
};
