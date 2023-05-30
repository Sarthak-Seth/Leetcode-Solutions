class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        string str="";
        for(int i=0;i<s.size();i++)
            
        {cout<<s[i];
           if(s[i]>='a' && s[i]<='z')
                str+=s[i];
            else if(s[i]>='A' && s[i]<='Z')
                str+=tolower(s[i]);
            else if(s[i]>='0' && s[i]<='9')
                str+=s[i];
            else 
                continue;
        }
        string str2=str;
        reverse(str.begin(),str.end());
            
            
     return str==str2;
    }
};
