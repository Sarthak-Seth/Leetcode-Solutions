class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        vector<int>v(26,0);
        
        for(char c:s)    v[c-'a']++;
        
        for(char c:s)    if(v[c-'a']==1) return i;
        
        return -1;
    }
};
