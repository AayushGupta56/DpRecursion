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

   bool solve(TreeNode* left,TreeNode* right){
    if(left==0||right==0)return left==right;
    if(left->val!=right->val)return false;
    if(solve(left->left,right->right)&&solve(left->right,right->left))return true;
     else return false;
   }
    bool isSymmetric(TreeNode* root) {
        if(root==0)return 0;
        if(solve(root->left,root->right))return true;
        else return false;
    }
};
