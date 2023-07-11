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
   
       //left right data
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>ans;
       if(root==NULL)return ans;
       stack<TreeNode*>s;stack<TreeNode*>s2;
       s.push(root);
       while(s.empty()==false){
           TreeNode*node=s.top();
           s.pop();
           s2.push(node);
           if(node->left!=NULL)s.push(node->left);
           if(node->right!=NULL)s.push(node->right);
   }
       while(s2.empty()==false){
           TreeNode*node=s2.top();s2.pop();
           ans.push_back(node->val);

       }
   return ans;
       
    }
};
