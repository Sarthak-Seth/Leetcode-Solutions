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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if (head == nullptr) return head;
        ListNode* temp = head;
        int len = 1;
        while (temp->next ) 
        {
            temp = temp->next;
            len++;
        }
        temp->next = head;
        k = k % len;
        for (int i = 0; i < len - k; i++) 
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
        
        /*ListNode * NewHead=head;
        ListNode * NewTail=head;
        ListNode *temp=head;
        while(k)
        {
            temp=temp->next;k--;
        }
        while(temp->next)
        {
           NewTail=NewTail->next; 
            temp=temp->next;
        }
        NewHead=NewTail->next;
        temp->next=head;
        NewTail->next=NULL;
        
        
        return NewHead;
        */
    }
};
