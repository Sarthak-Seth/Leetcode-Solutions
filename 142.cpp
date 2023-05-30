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
    ListNode *detectCycle(ListNode *head) 
    {
        if(head==NULL or head->next==NULL) return NULL;
        //if(head->next==head) {return head;} 

        ListNode *fast=head;
        ListNode *slow=head;

        bool isCycle=false;

        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                isCycle=true; break;
            }
        }

        if(isCycle==false){ return NULL;}
        slow=head;

        while(slow != fast)
        {
            slow=slow->next;
            fast=fast->next;
        }

        return slow;


    }
};
