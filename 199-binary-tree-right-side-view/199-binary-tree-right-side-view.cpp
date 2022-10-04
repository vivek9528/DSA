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
    vector<int> rightSideView(TreeNode* root) {
       vector<int>ans;
       queue<TreeNode*>q;
       if(root==NULL)return ans;
       q.push(root);
       while(!q.empty()){
           int sz=q.size();
           ans.push_back(q.front()->val);
           while(sz--){
               TreeNode*t=q.front();
               q.pop();
               if(t->right)q.push(t->right);
               if(t->left)q.push(t->left);
           }
       } return ans;
    }
};
