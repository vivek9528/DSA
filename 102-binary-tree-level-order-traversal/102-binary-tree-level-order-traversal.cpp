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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
                int sz=q.size();
            vector<int>v;
            for(int i=0;i<sz;i++)
            {
                root=q.front();
                q.pop();
                v.push_back(root->val);
                if(root->left!=NULL)
                {
                    q.push(root->left);
                }
                if(root->right!=NULL)
                {
                    q.push(root->right);
                }
        }
            ans.push_back(v);
    } 
        return ans;
    }
};