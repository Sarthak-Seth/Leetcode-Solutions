class Solution 
{
public:
    vector<int> plusOne(vector<int>& nums) 
    {
        
        if(nums[nums.size()-1]!=9)
        {
            nums[nums.size()-1]++;
        }
        else
        {
            for( int i=nums.size()-1;i>=0;i--)
            {
                if(nums[i]==9 && i!=0)
                {
                    nums[i]=0;
                }
                else if (nums[i]==9 && i==0)
                {
                    nums[i]=0;
                    nums.insert(nums.begin(),1);
                }
                else
                {
                    nums[i]++;
                    break;
                }
            }
        }
            
        return nums;
    }
};
