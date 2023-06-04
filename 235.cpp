/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution 
{
public:
//    TreeNode* lca(TreeNode* root ,int n1 ,int n2 )
//     {
//        if(root==NULL) return NULL;
//        if(root->val==n1 || root->val==n2) return root;
       
//        TreeNode*leftAns=lca(root->left,n1,n2);
//        TreeNode*rightAns=lca(root->right,n1,n2);
       
//        if(leftAns!=NULL && rightAns!=NULL) return root;
//        else if(leftAns==NULL && rightAns!=NULL) return rightAns;
//        else if(leftAns!=NULL && rightAns==NULL) return leftAns;
//        else return NULL;
       
//     }
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if ((root -> val > p -> val) && (root -> val > q -> val)) {
            return lca(root -> left, p, q);
        }
        if ((root -> val < p -> val) && (root -> val < q -> val)) {
            return lca(root -> right, p, q);
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {return lca(root,p,q);
        
//         int maxi = max(p->val ,q->val);
//         int mini = min(p->val ,q->val);
//         while(root!=NULL)
        
//         {
//             if(root->val > maxi)root = root->left;
//             else if (root->val < mini)root = root->right;
//             else return root;
//         }
//         return NULL;

    }
    
};
