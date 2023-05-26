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
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
        static vector<int>ans; 
        TreeNode* temp=root;
        if(temp)
        {
            inorderTraversal( temp->left);
            ans.push_back(temp->val);
        
            inorderTraversal(temp->right);}
        return ans;
    }
};
