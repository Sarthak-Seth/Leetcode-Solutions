class Solution 
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        vector<int>v;
        
        queue<TreeNode*>q;
        bool rtl=false;
        
        if(root==NULL)return ans;
        
        q.push(root);
        
        while(!q.empty())
        {
            int s=q.size();
            while(s--)
            {
                TreeNode*f=q.front();q.pop();
                
                if(f->left) q.push(f->left);
                if(f->right)q.push(f->right);
                
                v.push_back(f->val);
            }
            if(rtl) reverse(v.begin(),v.end());
            rtl=!rtl;
            ans.push_back(v);
            v.clear();
        }
        
        return ans;
    }
};
