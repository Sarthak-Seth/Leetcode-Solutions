class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0,j=0,k=0,n1=nums1.size(),n2=nums2.size();
        double median=0;
        vector<int>ans(n1+n2,0);
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                ans[k]=nums1[i];
                i++;
            }
            else
            {
                ans[k]=nums2[j];
                j++;
            }
            k++;
           
        }
         while(i<n1)
            {
                ans[k]=nums1[i];
                i++;k++;
            }
            while(j<n2)
            {
                ans[k]=nums2[j];
                j++;k++;
            }
        int mid=k/2;
        
        if(k%2==0)
        {
            median=((double)ans[mid-1]+(double)ans[mid])/2;
        }
        else
        {
            median=ans[mid];
        }
        return median;
    }
};
