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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(!head || !head->next) return head;
        
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* mid =even;

        while(even && even->next)
        {
            odd->next = even->next;
            odd = odd->next;
            even ->next= odd->next;
            even=even->next;    
        }
        odd->next = mid;

        return head;
        // ListNode*temp=head;
        // ListNode*ans =temp;
        // ListNode*odd =head->next->next;
        // ListNode*even =head->next;
        // while(odd !=NULL)
        // {
        //     temp->next = odd;
        //     temp=temp->next;
        //     if(odd->next != NULL && odd->next->next!=NULL){odd=odd->next->next;}
        //     else break;
        // }
        
        // while(even !=NULL || even->next->next!=NULL)
        // {
        //     temp->next = even;
        //     temp=temp->next;
        //     if(even->next != NULL && even->next->next!=NULL){even=even->next->next;}
        //     else break;
        // }
        // return ans;
    }
};
