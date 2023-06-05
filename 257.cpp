/**
 * Definition for a binary tree node.
 * struct TreeNode 
 {
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
    vector<string>ans;
    void solve(TreeNode* root,string curr)
    {
        if(!root) return;
        if(root->left != NULL or root->right != NULL) curr+=(to_string(root->val)+"->");
        else
        {
            curr += (to_string(root->val));
            ans.push_back(curr);
        }
        
        
        solve(root->left,curr);
        solve(root->right,curr);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        string curr="";
        solve(root,curr);
        return ans;
    }
};
