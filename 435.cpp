class Solution 
{
public:
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& it) 
    {
        int ans=0;
        sort(it.begin(),it.end(),cmp);
        vector<int>prev = it[0];
        for(vector<int> &i:it)
        {
            if(prev[1] > i[0]) ans++;
            else prev = i;
        }
        return ans - 1;
    }
};
