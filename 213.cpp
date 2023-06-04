class Solution
{
public:
    int dp[110];
    // int solve(vector<int> &nums,int i,vector<int>&dp)
    // {
    //     if(i==0) return nums[i];
    //     if(i<0) return 0;
    //     if(dp[i]!=-1) return dp[i];

    //     int ans = max(nums[i]+solve(nums,i-2,dp),solve(nums,i-1,dp));

    //     return dp[i] =  ans;
        
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

        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int n = nums.size();
        vector<int>v1;
        vector<int>v2;
        //vector<int>dp1(n,-1);
        //vector<int>dp2(n,-1);
        for(int i=1;i<n;i++) v1.push_back(nums[i]);
        for(int i=0;i<n-1;i++) v2.push_back(nums[i]);
        int ans1=solve(v1);
        int ans2=solve(v2);
        return max(ans1,ans2);

        
    }
};
