class Solution 
{
public:
    int kthSmallest(vector<vector<int>>& m, int k) 
    {
        int ans=0,a=0;
        
        int n=m.size()*m[0].size();
        
        vector<int> v(n,0);
    
        for(auto i : m)
        {
            for(auto j : i) {v[a]=j; a++;}
        }
        sort(v.begin(),v.end());
    return v[k-1];
    /*for(auto i : v)
    {
        if(k == 0) break;
        ans = i;k--;
    }
    return ans;*/
        
    }
};
