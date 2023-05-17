class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int i=0,j=height.size()-1 ,area=0;
        while(i<j)
        {
            int m=min(height[i],height[j]);
            area=(max(area,(m)*(j-i)));
            if(height[i]<height[j])i++;
            else j--;
        }
        return area;
    }
};
