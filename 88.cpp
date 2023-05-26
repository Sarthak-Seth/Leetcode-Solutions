class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<int>proxy(m);
        for(int i=0;i<m;i++)proxy[i] = nums1[i];

        int i=0,j=0,k=0;
        while(i<m and j<n)
        {
            if(proxy[i] < nums2[j] )    nums1[k++] = proxy[i++];
            else nums1[k++] = nums2[j++];
        }

        while(i<m) nums1[k++] = proxy[i++];
        while(j<n) nums1[k++] = nums2[j++];
    }
};
