class Solution 
{
public:
    int longestPalindrome(string s) 
    {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int v[128]={0};
        int ans=0;

        for(char c:s) 
        {
            if(v[int(c)]==1)
            {
                ans+=2;
                v[int(c)]=0;

            }
            else
            {
                v[int(c)]++;
            }
        }

        for(int i:v)
        {
            if(i==1) 
            {
                ans++;break;
            }
        }
        //if(n>0) ans++;
        return ans;
    }
};
