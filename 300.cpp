class Solution 
{
public:
    vector<vector<int>>dp;
    int solve(vector<int>& nums , int idx , int prevPickIdx)
    {
        if(idx>nums.size()-1) return 0;
        if(dp[idx][prevPickIdx+1]!=-1) return dp[idx][prevPickIdx+1];

        int pick = 0,notPick=0;

        notPick = solve(nums,idx+1,prevPickIdx);
        if(prevPickIdx == -1 or nums[idx] > nums[prevPickIdx]) pick = 1 + solve(nums,idx+1,idx);

        return dp[idx][prevPickIdx+1] = max(pick,notPick);
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        dp.resize(nums.size() +1,vector<int>(nums.size()+1,-1));
        return solve(nums,0,-1);
    }   
};
