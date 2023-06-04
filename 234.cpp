/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
      ListNode* prev = NULL;
      ListNode* curr=head;
      ListNode* nxt;
        while(curr!= NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr= nxt;
            
        }
        return prev;
    }
ListNode* MidNode(ListNode *head)
{
    ListNode*fast=head;
    ListNode*slow=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
    bool isPalindrome(ListNode* head) 
    {
        ListNode *mid = MidNode(head);
        ListNode *RevStart= reverseList(mid);
        ListNode *s=head,*m=RevStart;
        
        while(m!=NULL)
        {
            if(s->val != m->val)
                return false;
            
            s=s->next;
            m=m->next;
        }
         return true; 
    }
    
};
