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
    bool isvalid=true;
public:
  int solve(TreeNode*node){
    if(node==NULL)return 0;
    int left=solve(node->left);
    int right=solve(node->right);
    if(abs(left-right)>=2)return -1;
    if(left==-1||right==-1)return -1;
    return 1+max(left,right);

  }
    bool isBalanced(TreeNode* root) {
         int ans =solve(root);
          if(ans==-1)return false;
          else return true;
    }
};
