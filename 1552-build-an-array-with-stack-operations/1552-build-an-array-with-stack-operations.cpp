class Solution 
{
public:
    vector<string> buildArray(vector<int>& t, int n) 
    {
        unordered_set<int>st(t.begin(),t.end());
        string a = "Push",b="Pop";

        vector<string>ans;
        for(int i=1;i<min(t.back(),n)+1;i++)
        {
            ans.push_back(a);
            if(!st.count(i)) ans.push_back(b);
        }
        return ans;
    }
};