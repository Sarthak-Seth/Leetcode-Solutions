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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>>ans;
        if(!root) return ans;

        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int l = q.size();
            vector<int>smallAns;
            while(l--)
            {
                TreeNode* front  = q.front(); q.pop();

                smallAns.push_back(front->val);

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            ans.push_back(smallAns);
        }

        return ans;
    }
};
