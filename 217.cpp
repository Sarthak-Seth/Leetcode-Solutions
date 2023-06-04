class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        if(nums.size()==1) return false;
        unordered_set<int>umap;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(nums[i])!=umap.end()) return true;
            else umap.insert({nums[i]});
        }
        return false;
    }
};
