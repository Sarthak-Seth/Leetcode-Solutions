class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int maxi = 2,i=0,j=0;
        unordered_map<int,int>mp;

        for(int &i:nums) mp[i]++;
        while(i<3)  
            if(mp[i]--) nums[j++] = i;
            else i++;
        
    }
};
