class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        if(nums.size()==1) return nums[0];
        int maxSum=INT_MIN,curr=0;

        for(int &i:nums)
        {
            curr = max(i,curr+i);
            if(maxSum<curr) maxSum = curr;
        }
        return maxSum;
    }
};
