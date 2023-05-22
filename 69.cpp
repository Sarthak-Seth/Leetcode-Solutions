class Solution 
{
public:
    int mySqrt(int x) 
    {
        long long int l=0,r=x;
        
        while(l<=r)
        {
            long long int mid=l+(r-l)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            else if(x>mid*mid)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return l-1;
    }
};
