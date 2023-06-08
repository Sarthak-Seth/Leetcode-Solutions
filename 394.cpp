class Solution 
{
public:

    string decodeString(string s) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        string ans = "";
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ']') st.push(s[i]);
            
            else
            {
                string curr = "";
                
                while(st.empty() or st.top() != '[')
                {
                    curr = st.top() + curr ;
                    st.pop();
                }
                
                st.pop();   
                string number = "";
                
                while(!st.empty() && isdigit(st.top()))
                {
                    number = st.top() + number;
                    st.pop();
                }
                int k = stoi(number);    
                
                while(k--)
                {
                    for(char &i : curr)st.push(i);
                }
            }
        }
        
        
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
        
    }
};
