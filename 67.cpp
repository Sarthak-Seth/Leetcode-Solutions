class Solution 
{
public:
    string addBinary(string &a, string &b) 
    {
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >-1 || j >-1)
        {
            int sum = carry;
            if(i > -1) sum += a[i--] - '0';
            if(j > -1) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum % 2);
        }
        if(carry) res += to_string(carry);
        reverse(res.begin(), res.end());
        return res;
    }
};
