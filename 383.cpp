class Solution 
{
public:
    bool canConstruct(string r, string m) 
    {
        vector<int>v(26,0);
        for(char i:m) v[i-'a']++;
        
        for(char i:r) v[i-'a']--;
        
        for(int i:v)
            if(i<0) return false;
        return true;
    }
};
