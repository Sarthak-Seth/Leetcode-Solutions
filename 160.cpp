/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        int lenA=0, lenB=0;  
		   while(tempA!=NULL)
			{
				tempA=tempA->next;
				lenA++;
			}
			while(tempB!=NULL)
			{
				tempB=tempB->next;
				lenB++;
			}
        tempA=headA;
        tempB=headB;
        for(int i=0;i<abs(lenA-lenB);i++)
        {
            if(lenA>lenB)
            {
                tempA=tempA->next;
            }
            else
            {
                tempB=tempB->next;
            }
        }
        while(tempA && tempB)
        {
            if(tempA ==tempB)
            {
                return tempA;
            }
            else
            {
                tempA=tempA->next;
                tempB=tempB->next;
            }
        } 
        return NULL;
    }
};
