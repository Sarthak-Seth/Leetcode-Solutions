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
    vector<vector<int>>v;
    vector<int> largestValues(TreeNode* root) 
    {
        if(!root) return{};

        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);

        while(q.size())
        {
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();q.pop();

                temp.push_back(curr -> val);

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            v.push_back(temp);
        }

        for(vector<int> &i:v) ans.push_back(*max_element(i.begin(),i.end()));

        return ans;
    }
};