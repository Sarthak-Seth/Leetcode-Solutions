class Solution 
{
public:
    vector<string> ans;
    bool isValid(string a)
    {
        return (a[0]!='0' and stoi(a)<256);
    }
    void solve(string &s,int idx,int parts,string str)
    {
        if(idx==s.size() and parts ==4) 
        {
            str.pop_back();
            ans.push_back(str);
            return;
        }

        if(idx+1<=s.size())
        {
            solve(s,idx+1,parts+1,str+s.substr(idx,1)+'.');
        }
        if(idx+2<=s.size() && isValid(s.substr(idx,2)))
        {
            
            solve(s,idx+2,parts+1,str+s.substr(idx,2)+'.');
        }
        if(idx+3<=s.size() && isValid(s.substr(idx,3)))
        {
            
            solve(s,idx+3,parts+1,str+s.substr(idx,3)+'.');
        }

    }  
    vector<string> restoreIpAddresses(string s) 
    {
        
    string str;
        if(s.size()>12)return ans;
        solve(s,0,0,str);
        return ans;
    }
};
