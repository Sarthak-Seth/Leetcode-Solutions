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
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    unordered_map<long long,int> mp;
    int ans = 0;
    int pathSum(TreeNode* root, int targetSum)
    {
         mp[0]++; // when total subarray is target
         solve(root,0,targetSum);
         return ans;
    }
    void solve(TreeNode* root,long long value,int targetSum) 
    {
         if(!root) return;

         value += root->val;
         ans += mp[value - targetSum];
         mp[value]++;

         solve(root->left,value,targetSum);
         solve(root->right,value,targetSum);
         
         mp[value]--;
         value-=root->val;
    }
};