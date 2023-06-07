/**
 * Definition for singly-linked list.
 * struct ListNode 
 t{
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
    vector<int>v;
    Solution(ListNode* head) 
    {
        while(head=head->next)v.push_back(head->val);
    
    }
    
    int getRandom() 
    {
        return v[rand()%v.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
