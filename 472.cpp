class Solution 
{
public:
    unordered_set<string> st;
    unordered_map<string,bool> mem;
    bool check(string &s)
    {
        if(mem[s]) return mem[s];

        for(int i=0;i<s.size();i++)
        {
            string pf=s.substr(0,i+1);
            string sf=s.substr(i+1);

            if((st.find(pf)!= st.end() and st.find(sf) != st.end()) || (st.find(pf) != st.end() and check(sf) ) ) return mem[s] = true;

        }
            return mem[s]=false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) 
    {
        vector<string>ans;
        for(string &s:words) st.insert(s);

        for(string &s : words)
        {
            if(check(s)) ans.push_back(s);
        }
        return ans;
    }
};
