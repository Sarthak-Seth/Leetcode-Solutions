class Solution 
{
public:
int dp[110];

    // int solve(vector<int>& nums,int i)
    // {
    //     if(i==0) return nums[i];
    //     if(i<0) return 0;

    //     if(dp[i]!=-1) return dp[i];
    //     int ans = max(solve(nums,i-2) + nums[i],solve(nums,i-1));

    //     return dp[i]=ans;
    // }
    int solve(vector<int>&nums)
    {
        //vector<int>dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++)  dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
        
        return dp[nums.size()-1];
    }
    int rob(vector<int>& nums)
    {
        //for(int i=0;i<110;i++)dp[i]=-1;
        return nums.size()>1?solve(nums):nums[0];
    }    
};
