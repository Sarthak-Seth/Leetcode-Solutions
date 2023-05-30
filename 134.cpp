class Solution 
{
public:
   
    int canCompleteCircuit(vector<int>& g, vector<int>& c) 
    {
        if(accumulate(g.begin(),g.end(),0)<accumulate(c.begin(),c.end(),0)) return -1;
       int extra=0,curr=0,ans=0;
       for(int i=0;i<g.size();i++)
       {
           extra+=g[i]-c[i];
           curr += g[i]-c[i];

           if(curr<0)
           {
               curr=0;
               ans=i+1;
           }
       }
       //if(extra > -1) 
       return ans;
     //  else return -1;
    }
};
