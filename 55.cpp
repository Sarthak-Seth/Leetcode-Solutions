class Solution 
{
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        int reqJump=-1;
        for(int i=n-1;i>-1;i--)
        {
            reqJump++;
            if(nums[i]>=reqJump) reqJump=0;

        }
        return reqJump==0;
    }
};
