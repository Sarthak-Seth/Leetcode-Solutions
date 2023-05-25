#include<vector>
class Solution 
{
public:
    bool searchMatrix(vector<vector<int>>& m, int t)
    {
        int r=0,c=m[0].size()-1;
       while(r <m.size() && c >-1)//treat as a bst row is left, col is right// element ka left is smaller and vice versa
        {
            if(t==m[r][c]) return true;
            if(t>m[r][c])r++;
            else c--;
        } 
        return false;                               
    }
    /*bool search(vector<int>& nums, int t) 
    {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(t==nums[mid])
            {
                return true;
            }
            else if(t>nums[mid])
                
            {
               l=mid+1; 
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& m, int target) 
    {
        
        
        for(int i=0;i<m.size();i++)
        {
            int min=m[i][0];
            int max = m[i][m.size()];
            if(target==min || target==max) return true;
            if (target>min && target<max)
                return search(m[i],target);
                
        }
        return false;
    }
    */
}; 
