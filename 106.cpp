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
    TreeNode* solve(vector<int>& in, vector<int>& post,int inStart, int inEnd,int postStart,int postEnd)
    {
        if(inStart > inEnd) return NULL;

        TreeNode* root = new TreeNode(post[postEnd]);
        int i=inStart;

        for(;i<=inEnd;i++)
            if(in[i]==root->val)break;

        int lSize = i - inStart;
        int rSize = inEnd - i;

        root->left = solve(in,post,inStart,i-1,postStart,postStart + lSize - 1 );
        root->right = solve(in,post,i+1,inEnd,postEnd - rSize ,postEnd - 1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        return solve(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};
