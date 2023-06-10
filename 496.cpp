class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans/*(nums1.size(),0)*/;
        //sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {
                    int val=-1;
                    for(int k=j;k<nums2.size();k++)
                    {
                        if(nums2[k]>nums2[j]) {val=nums2[k];break;}
                    }
                    ans.push_back(val);
                }    
            }
            
        }
        return ans;
    }
};
