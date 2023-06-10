class Solution 
{
public:
    
        vector<vector<int>>ans;
        vector<int>v;
    void solve(vector<int>& nums,int idx)
    {
        if(idx>nums.size()) return;

        if(v.size()>1) ans.push_back(v);

        unordered_set<int>st;

        for(int i=idx;i<nums.size();i++)
        {
            if((v.empty() || v.back()<=nums[i] )&& (st.find(nums[i])==st.end()))
            {
                
                st.insert(nums[i]);

                v.push_back(nums[i]);
                solve(nums,i+1);
                v.pop_back();

            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        solve(nums,0);
        return ans;

    }
};
