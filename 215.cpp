class Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};
