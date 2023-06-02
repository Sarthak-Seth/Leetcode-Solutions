class Solution 
{
public:
    int titleToNumber(string s) 
    {
        int a=0,ans=0;;
        for(auto i: s)
        {
            a=i-64;
            ans=ans*26+a;
        }
        return ans;
    }
};
