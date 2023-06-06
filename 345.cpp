
class Solution
{
public:
    bool isV(char c)
    {
        c = tolower(c);
        return (c =='a' || c =='e' || c =='i' || c =='o' || c =='u');
    }
    string reverseVowels(string s)
    {
        int i=0,j=s.size()-1;
        
        while(i<j)
        {
            bool a = isV(s[i]) , b = isV(s[j]);
            
            if(a && b) swap(s[i],s[j]),i++,j--;
            else
            {
                if(!a)i++;
                if (!b)j--;
            }  
        }
        return s;
    }
};
        
  
