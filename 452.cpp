
class Solution 
{
public:

    int findMinArrowShots(vector<vector<int>>& p) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        sort(p.begin(),p.end());

        int ans=1,end=p[0][1];

        for(int i=0;i<p.size();i++)
        {
            int start = p[i][0];
            if(start > end)//no overlap
            {
                end = p[i][1];
                ans++;
            }
            else
            {
                end=min(end,p[i][1]);
            }
        }
        return ans;
    }
};
