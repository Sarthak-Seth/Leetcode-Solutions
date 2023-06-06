class Solution 
{
public:
    string removeDuplicateLetters(string &s) 
    {
        stack<char>st;
        vector<bool> vis(26,0);
        vector<int>last_idx(26);

        for(int i=0;i<s.size();i++) last_idx[s[i] - 'a'] = i;

        for(int i = 0;i<s.size();i++)
        {
            if(vis[s[i]-'a']) continue;
            while(!st.empty() and st.top()>s[i] and i<last_idx[st.top() - 'a'])
            {
                vis[st.top()-'a'] = 0; st.pop();
            }
            st.push(s[i]); 
            vis[s[i] -'a'] = 1;
        }
        s = "";
        while(!st.empty())
        {
            s = st.top() + s; st.pop();
        }
        return s;
    }
};
