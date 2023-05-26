class Solution 
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    int maxDepth(TreeNode* root) 
    {
        if(!root) return 0;
        int hl = maxDepth(root->left);
        int hr = maxDepth(root->right);

        return max(hl,hr)+1;
    }
};
