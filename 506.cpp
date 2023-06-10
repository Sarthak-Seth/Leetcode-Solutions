class Solution 
{
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        vector<string>ans(score.size());
        map<int,int,greater<int>>m;
        for(int i=0;i<score.size();i++)    m.insert({score[i],i});
        // for(pair<int,int> i:m)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        int cnt=1;
        for(pair<int,int> i:m)
        {
            int idx = i.second;
            if(cnt==1)  ans[idx] ="Gold Medal";
            else if(cnt==2)  ans[idx] ="Silver Medal";
            else if(cnt==3)  ans[idx] ="Bronze Medal";
            else ans[idx] = to_string(cnt);
            cnt++;
        }
        return ans;
    }
};
