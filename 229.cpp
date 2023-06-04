class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size(),mn = n/3;
        vector<int> ans;
        if(n==0) return ans;
        
        int first = -1,second = -1,cnt1 = 0,cnt2 = 0;
        for(auto x : nums)
        {
            if(first == x)
            {
                cnt1++;
            }
            else if(second == x)
            {
                cnt2++;
            }
            else if(cnt1==0)
            {
                first = x;
                cnt1++;
            }
            else if(cnt2==0)
            {
                second = x;
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(auto x :nums)
        {
            if(first == x) cnt1++;
            else if(second == x) cnt2++;
        }
        if(cnt1 > mn) ans.push_back(first);
        if(cnt2 > mn) ans.push_back(second);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
