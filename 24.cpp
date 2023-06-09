/**
 * Definition for singly-linked list.
 * struct ListNode 
 {
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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL)
        {
            return head;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode *prev=new ListNode();
       
        prev->next=head;
        ListNode *ans=prev;
        ListNode *curr=head;
        ListNode *n;
        while(curr && curr->next)
        {
            n=curr->next;
            curr->next=n->next;
            n->next=curr;
            prev->next=n;
            prev=curr;
            curr=prev->next;
                
        }
         return ans->next;   
                                    
    }
};
