class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            int target = -nums[i];
            int l = i+1,r = nums.size()-1;
            
            while(l<r)
            {
                if(target > nums[l]+nums[r]) l++;
                else if(target < nums[l]+nums[r]) r--;

                else
                {
                    vector<int>v = {nums[i],nums[l],nums[r]};
                    ans.push_back(v);

                    while(l<r and nums[l] == v[1]) l++;
                    while(l<r and nums[r] == v[2]) r--;
                }
            }
            while(i<nums.size()-1 and nums[i] == nums[i+1])i++;
        }
//-4 -1 -1 -1  0 0 0 1 2 
        return ans;
    }
};
