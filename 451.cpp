class Solution 
{
public:
    string frequencySort(string s) 
    {
        string ans="";
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        
        for(char c:s)   m[c]++;
        
        for(auto [c,i]:m)   pq.push(make_pair(i,c));
        
        while(!pq.empty())
        {
            pair<int,char> p = pq.top();pq.pop();
            while(p.first--) ans += p.second;
        }
        return ans;
    }
};
