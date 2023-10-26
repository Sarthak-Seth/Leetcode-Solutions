class Solution 
{
public:
    int m  = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) 
    {
        unordered_set<int>st(arr.begin(),arr.end());
        unordered_map<int,int>dp;

        sort(arr.begin(),arr.end());
        
        for(int i:arr)
        {
            dp[i] = 1;
            for(int j:arr)
            {
                if (j > sqrt(i)) break;
                if(!(i%j) and st.find(i/j) != st.end())
                {
                    long long cnt = 1LL*dp[j]*dp[i/j];

                    if(i/j == j) dp[i] = (dp[i] + cnt)%m;
                    else  dp[i] = (dp[i] + cnt*2)%m;
                } 
            }
        }

        int ans = 0;
        for(auto &[i,c]:dp)ans = (ans + c)%m;
        
        return ans;
    }
};