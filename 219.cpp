class Solution 
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(nums[i])!=umap.end() && abs(i-umap.find(nums[i])->second)<=k) return true;
            //else umap.insert({nums[i],i});
            else umap[nums[i]] = i;
        }
        return false;
    }
};
