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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *tmp1 = list1;
        ListNode *tmp2 = list2;
        ListNode *head = new ListNode();
        ListNode* s=head;
        while (tmp1 && tmp2)
        {
            if (tmp1->val < tmp2->val)
            {
                s->next = tmp1;
                tmp1 = tmp1->next;
            }
            else
            {
                s->next = tmp2;
                tmp2 = tmp2->next;
            }
            s = s->next;
            
        }
        while(tmp1 != NULL)
        {
            s->next = tmp1;
            tmp1 = tmp1->next;
            s=s->next;
            
            
        }
        while(tmp2 != NULL)
        {
            s->next = tmp2;
            tmp2 = tmp2->next;
            s=s->next;
            
        }
        return head->next ;
    }
};
