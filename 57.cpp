class Solution 
{
public:
    vector<vector<int>> insert(vector<vector<int>>&v, vector<int>& n) 
    {
        vector<vector<int>>ans;
        for(vector<int> &i:v )
        {
            if(i[1]<n[0])ans.push_back(i);
            else if(i[0]>n[1]){ans.push_back(n);n=i;}
            else
            {
                n[0]=min(n[0],i[0]);
                n[1]=max(n[1],i[1]);
            }

        }
        ans.push_back(n);
        return ans;
    }
};
