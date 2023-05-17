class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //We will store our values and the indices here.
        unordered_map<int,int> map;        
        //We iterate through the loop.
        for(int i = 0; i < nums.size(); i++)
        {
			if(map.find(target-nums[i]) != map.end())
            {
                //If map contains the value target - nums[index] return the indices of these two values.
                return {i, map[target-nums[i]]};
            }			
            map[nums[i]] = i;
            //If not add nums[i] to map.
        }
        
        
        //If there is no solution return an empty vector.        
        return {};
    }   
};
