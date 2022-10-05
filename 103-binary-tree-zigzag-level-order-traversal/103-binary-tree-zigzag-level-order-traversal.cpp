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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>v;
        queue<TreeNode*>q;
        if(root==NULL) return v;
        q.push(root);
        int f=1;
        while(!q.empty()){
             vector<int>ans;
        int sz=q.size();
        while(sz--){
        TreeNode*t=q.front();
        ans.push_back(t->val);
        q.pop();
        if(t->left!=NULL)q.push(t->left);
        if(t->right!=NULL)q.push(t->right);
        }
        if(f%2==0) {
            reverse(ans.begin(),ans.end());
            v.push_back(ans);
        }
        else{
            v.push_back(ans);
        }
        f=!f;
        }
        return v;
    }
};