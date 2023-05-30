class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        
        int zor=0;
        for(int i=0;i<nums.size();i++)
        {
            zor^=nums[i];
            
        }
        return zor;
    }
};
