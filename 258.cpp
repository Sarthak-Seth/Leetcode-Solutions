class Solution 
{
public:
    int addDigits(int num) 
    {
        int digit;
        while(num/10!=0)
        {
            digit=num%10;
            num=num/10 + digit;
            
        }
        return num;
    }
};
