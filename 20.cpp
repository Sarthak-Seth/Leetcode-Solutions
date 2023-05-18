class Solution 
{
public:
    bool isValid(string &s) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(s.size()%2==1) return 0;
        stack<char>st;
        for(char &c:s)
        {
            if(c=='{' or c=='[' or c=='(') st.push(c);
            else
            {
                if(st.empty())  return 0;
                if(c=='}' and st.top() != '{') return 0;
                if(c==']' and st.top() != '[') return 0;
                if(c==')' and st.top() != '(') return 0;
                st.pop();
            }
        }
        return st.empty();
    }
};
