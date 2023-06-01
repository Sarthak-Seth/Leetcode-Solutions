class Solution 
{
public:
   
    ListNode* sortList(ListNode* head) 
    {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode*fast= head;
        ListNode*slow= head;
        ListNode*m=NULL;
        ListNode*tmp=head;
        /*while(tmp)
        {
            cout<<tmp->val<<" ";
            tmp= tmp->next;
        }
        cout<<endl;
        */
        while(fast && fast->next)
        {
            m=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        m->next=NULL;
        
        ListNode*l1=sortList(head);
        ListNode*l2=sortList(slow);
        
        return merge(l1,l2);
    }
    
    
    
    ListNode*merge(ListNode*l1, ListNode*l2)
    {
        ListNode*h =new ListNode();
        ListNode*ans=h;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                h->next=l1;
                l1=l1->next;
            }
            else
            {
                h->next=l2;
                l2=l2->next;
            }
            h=h->next;
        }
        while(l1)
        {
            h->next=l1;
                l1=l1->next;
            h=h->next;
        }
        while(l2)
        {
            h->next=l2;
                l2=l2->next;
            h=h->next;
        }
        return ans->next;
    }
};
