/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
public:
    // vector<int>ans;
    // vector<int> in(TreeNode*root)
    // {
    //     if(root==NULL) return {};
    //     in(root->left);
    //     ans.push_back(root->val);
    //     in(root->right);
    //     return ans;
    // }
    int kthSmallest(TreeNode* root, int k) 
    {
        TreeNode* temp =root;
        stack<int>st;
        while(1)
        {
            while(root != NULL)
            {
                st.push_back(temp->val);
                temp = temp->next;
            }
            temp ->val = stack.pop();
            
        }
    }
};
