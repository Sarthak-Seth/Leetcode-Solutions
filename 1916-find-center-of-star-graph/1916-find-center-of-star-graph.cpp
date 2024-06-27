class Solution 
{
public:
    int findCenter(vector<vector<int>>& e) 
    {
        unordered_map<int,int>m;

        for(vector<int> &i: e)
        {
            m[i[0]]++,m[i[1]]++;

            if(m[i[0]] == e.size()) return i[0];
            if(m[i[1]] == e.size()) return i[1];

        }
        return 1;
    }
};