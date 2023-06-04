class Solution 
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) 
    {
        int x1 = ax2-ax1;
        int y1 = ay2-ay1;
        int area1 = x1*y1;
        
        int x2 = bx2-bx1;
        int y2 = by2-by1;
        int area2 = x2*y2;
        
        int area3 = 0;
        
        int left = max(ax1, bx1);
        int right = min(ax2, bx2);
        int top = min(ay2, by2);
        int bottom = max(ay1, by1);
        
        if(left < right && top > bottom)    area3 = (right-left) *(top-bottom);
        
        return area1 + area2 - area3;
    }
};
