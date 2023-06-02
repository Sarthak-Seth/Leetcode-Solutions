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
    vector<int>ans;
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    void solve(TreeNode* root,int x)
    {
        if(!root)   return;

        if(x== ans.size())  ans.push_back(root->val);

        if(root->right)solve(root->right,x+1);
        if(root->left)solve(root->left,x+1);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        if(!root)   return{};
        solve(root,0)   ; 
        return ans;
    }
};
