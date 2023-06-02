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
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode * tmp=head;
        while(tmp != NULL)
        {
            if(tmp->val==val)
            {
                ListNode *d=tmp;
                tmp=tmp->next;
                head=tmp;
                delete d;
            }
            else if(tmp->next != NULL && tmp->next->val == val)
            {
                ListNode *d=tmp->next;
                tmp->next=tmp->next->next;
                delete d;
            }
            else
            {
                tmp=tmp->next;

            }
        }
        return head;
    }
};
