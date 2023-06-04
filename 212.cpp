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
    
    
    int countNodes(TreeNode* root)
    {
        if(root == NULL) return 0;
        
        int hr = 1,hl = 1;
        
        TreeNode*l=root;
        TreeNode*r=root;
        
        while(l = l->left) hl++;
        while(r = r->right) hr++;
        
        if (hl==hr) return pow(2,hl) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
        
        
    }
    
};
