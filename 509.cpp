class Solution 
{
public:
    //int dp[31];
    int solve(int n)
    {
        int prev2 = 0;
        int prev1 = 1;
        int curr;
        
        for(int i=2;i<=n;i++)   
        {
            curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        
        return prev1;
    }
    int fib(int n) 
    {
        if(n<2) return n;
        //for(int i=0;i<31;i++)dp[i]=-1;
        return solve(n);
    }
};
