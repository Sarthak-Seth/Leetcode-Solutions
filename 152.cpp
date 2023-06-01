class Solution
{
public:
    int maxProduct(vector<int>& nums)
    {
        int mx = INT_MIN, imax = 1, imin = 1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0)swap(imax,imin);
            int a=imax*nums[i];int b=imin*nums[i];
            imax = max(a, nums[i]);
            imin = min(b, nums[i]);
            
            mx = max(mx, imax);
        }
        return mx;
    }
};
