class Solution 
{
public:
    string intToRoman(int num) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        string one[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string ten[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hund[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string th[] = {"","M","MM","MMM"};

        string th_ans = th[num/1000]; num%=1000;
        string hund_ans = hund[num/100];num%=100;  
        string ten_ans = ten[num/10];num%=10;  
        string one_ans = one[num];  

        return th_ans + hund_ans + ten_ans + one_ans;
    }
};
