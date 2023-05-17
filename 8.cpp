class Solution 
{
public:
    int myAtoi(string s) 
    {
        int n = s.length();
        int i = 0 , isNegative = 0;
        long long res = 0;
        while(i<n && s[i]==' ') i++;
        if(i< n && s[i]=='+') i++;
        else if(i<n && s[i]=='-')
        { 
           isNegative = 1;
           i++;
        }
        else if(s[i]<'0' || s[i]>'9') return 0;         
        while(i < n && s[i]>='0' && s[i]<='9')
        {
            res = res * 10 + (s[i]-'0');
            //overflow
            if(!isNegative && res>=INT_MAX) return INT_MAX;
            if(isNegative && -res<=INT_MIN) return INT_MIN;
            i++;
        }
        if(isNegative && res!=0) return (int)(-res);
        return (int)(res);
        
    }
};
