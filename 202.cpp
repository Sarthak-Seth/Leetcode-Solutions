class Solution 
{
public:
    int SumSquare(int a)
    {
        int sum=0;
        while(a>0)
            {
                int d=a%10;
                a/=10;
                sum+=d*d;
            
            }
        return sum;
    }
    bool isHappy(int n) 
    {
        if(n==7)return true;
        if(n<10 && n>1) return false;
        
        int k=n;
        while(k>9)
        {
            k=SumSquare(k);
        }
        if(k==1 || k==7)return true;
        return false;
    }
    
};
