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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        
        
        ListNode *b = new ListNode(0, head);
        ListNode *prev = b, *curr = head;
        
        while(curr) 
        {
            bool flag = 0;
            while(curr->next!=NULL && curr->val == curr->next->val) 
            {
                flag = 1;
                curr = curr->next;
            }
            if(flag)prev->next = curr->next;
            else prev = curr;
            
            curr = curr->next;
        }
		
        return b->next;
        /*ListNode* ans=head;
        ListNode* prev=head;
        
        ListNode* nxt=prev->next;
        while(nxt->next)
        {
            if(prev->val==nxt->val)
            {
                prev->next=nxt->next;
                nxt=nxt->next;
            }
            else
            {
                prev=prev->next;nxt=nxt->next;
            }
        }
        return ans;
        */
    }
};
