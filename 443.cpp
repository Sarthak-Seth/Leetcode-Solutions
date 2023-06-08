class Solution 
{
public:
    int compress(vector<char>& chars) 
    {
        if(chars.size()<2) return chars.size();

        int i=0,j=0;
        while(i<chars.size())
        {
            chars[j] = chars[i];
            int cnt =0;
            while(i<chars.size() and chars[i] == chars[j])
            {
                cnt++;
                i++;
            }
            if(cnt==1) j++;
            else
            {
                string tmp = to_string(cnt);
                for(auto &c:tmp ) chars[++j] = c;
                j++;
            }
        }
        return j;
    }
};
