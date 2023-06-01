class Solution 
{
public:
    using lli = long long int;
    int evalRPN(vector<string>& s)
    {
        stack<lli>st;
        for(string c:s)
        {
            if(c == "+")
            {
                lli a=st.top();st.pop();
                lli b=st.top();st.pop();
                st.push(a+b);
            }
            else if(c == "-")
            {
                lli a=st.top();st.pop();
                lli b=st.top();st.pop();
                st.push(b-a);
            }
            else if(c == "/")
            {
                lli a=st.top();st.pop();
                lli b=st.top();st.pop();
                st.push(b/a);
            }
            else if(c == "*")
            {
                lli a=st.top();st.pop();
                lli b=st.top();st.pop();
                st.push(a*b);
            }
            else st.push(stoi(c));
        }
        return st.top();
    }
};
