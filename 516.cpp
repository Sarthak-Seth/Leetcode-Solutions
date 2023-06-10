class Solution 
{
public:
    int dp[1001][1001]={0};
    int solve(string &s , int l ,int r)
    {
        if(l>r) return 0;
        if(l == r)  return 1;
        if(dp[l][r] != 0)   return dp[l][r];

        if(s[l] == s[r]) return  dp[l][r] =  2 + solve(s,l+1,r-1);
        else return dp[l][r] = max(solve(s,l+1,r),solve(s,l,r-1));
    }
    int longestPalindromeSubseq(string &s) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        return solve(s,0,s.size()-1);
    }
};
