class Solution 
{
public:
    string simplifyPath(string s) 
    {
        int n = s.size();
        stack<string>st;
        string ans="";

        for(int i=1;i<n;i++)
        {
            if(s[i] == '/') continue;
            
            string tmp = "";
            while(i < n and s[i] != '/')tmp+=s[i++];

            if(tmp == ".") continue;

            else if(tmp == "..")
            {
                if(!st.empty()) st.pop();
            }
            else st.push(tmp);
            
        }
        while(!st.empty())
        {
            ans = '/' + st.top() + ans;
            st.pop();
        }

        if(ans.size() == 0) return "/";
        return ans;
    }
};
