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
    bool solve(TreeNode* root,long mini,long maxi)
    {
        if(!root) return true;
        if(root->val<=mini || root->val>=maxi) return false;
        if(root->val>mini and root->val<maxi) return (solve(root->left,mini,root->val) and solve(root->right,root->val,maxi));
        
        return 0;
    }
        
    
    // vector<int>inorder;
    // void inOrderTraversal(TreeNode* root)
    // {
    //     if(root!=NULL) 
    //     {
    //         inOrderTraversal(root->left);
    //         inorder.push_back(root->val);
    //         inOrderTraversal(root->right);
    //     } 
    // }
    bool isValidBST(TreeNode* root) 
    {
        // if(root==NULL)return root;
        
        // inOrderTraversal(root);
        
        // for(int i=0;i<inorder.size()-1;i++)
        // {
        //     if(inorder[i] >= inorder[i+1]) return false;
        // }
        // return true;
         return solve(root,LONG_MIN,LONG_MAX);
        
        
    }
};
