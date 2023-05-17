class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        if( s == "") return 0;
        unordered_map<char,int>m;
        int l=0,r=0,ans=0;
        
        while(r < s.size())
        {
            if(m.find(s[r]) != m.end()) l = max(l , m[s[r]] + 1);
            else m.insert(make_pair(s[r],r));
            
            ans=max(ans,r-l+1);
            r++;
        }
        
        return ans;
    }
};  
