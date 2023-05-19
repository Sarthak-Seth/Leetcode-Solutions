class Solution 
{
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size(),ans=0,currEnd=0,maxJ=0;
        for(int i=0;i<n;i++)
        {
            maxJ=max(maxJ,i+nums[i]);

            if(i == currEnd and i != n-1)
            {
                ans+=1;
                currEnd=maxJ;
            }
        }
        return ans;
    }
};
