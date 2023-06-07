class SummaryRanges 
{
public:
    set<int>st;
    SummaryRanges() 
    {
        st.clear();
    }
    
    void addNum(int value) 
    {
        st.insert(value);
    }
    
    vector<vector<int>> getIntervals() 
    {
        vector<vector<int>>ans;
        
        vector<int>v(st.begin(),st.end());
        //sort(v.begin(),v.end());

        int n = v.size();

        for(int i=0;i<n;i++)
        {
            int s=v[i];
            while((i<n-1) && (v[i]+1 == v[i+1])) i++;
            ans.push_back({s,v[i]});
        }
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
