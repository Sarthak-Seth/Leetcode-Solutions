class Solution 
{
public:
    int ladderLength(string &s, string &e, vector<string>& v) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        queue<pair<string,int>>q;
        unordered_set<string>st(v.begin(),v.end());

        q.push({s,1});
        st.erase(s);

        while(!q.empty())
        {
            string curr = q.front().first;
            int num = q.front().second;

            q.pop();

            if(curr == e) return num;

            for(int i = 0;i<curr.size();i++)
            {
                char currChar = curr[i];
                for(char c = 'a';c<='z';c++)
                {
                    curr[i] = c;
                    if(st.find(curr) != st.end())
                    {
                        st.erase(curr);
                        q.push({curr,num+1});
                    }
                }
                curr[i] = currChar;
            }
        }
        return 0;
    }
};
