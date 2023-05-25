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
        ListNode* tmp=new ListNode();
        //ListNode* ToDelete=new ListNode();
        tmp=head;
        //cout<<tmp->val;
        if(head==NULL || head->next==NULL)
        {
            return head ;
        }
        while(tmp !=NULL && tmp->next != NULL)
        {
            if(tmp->val==tmp->next->val)
            {
                ListNode* ToDelete=new ListNode();
                ToDelete=tmp->next;
                tmp->next=tmp->next->next;
                delete ToDelete;
            }
            else
            {
               tmp=tmp->next; 
            }

        }
        return head;
    }
};
