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
    using pii = pair<bool,int>;
    pii solve(TreeNode* root)
    {
        if(!root) return{1,0};

        pii l  = solve(root->left);
        pii r  = solve(root->right);
    
        bool l_ans = l.first;
        bool r_ans = r.first;
        int  diff = abs(l.second - r.second)<=1;

        pii ans;
        ans.second = max(l.second,r.second)+1;

        if(l_ans and r_ans and diff)
        {
            ans.first = 1;
            //ans.second= l.second - r.second;
        }
        else
        {
            ans.first = 0;
            //ans.second= l.second - r.second;
        }
        return ans;
    }
    bool isBalanced(TreeNode* root) 
    {
        return solve(root).first;
    }
};
