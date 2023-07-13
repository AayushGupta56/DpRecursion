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
void solve(TreeNode*node,vector<string>&ans,string temp){
    if(node==0)return;
     string s=to_string(node->val); temp=temp+s;
     if(node->left==0&&node->right==0){
         ans.push_back(temp);
         return;
     }
     else temp=temp+"->";
    // string s=to_string(node->val);
     
    // temp=temp+s;
     solve(node->left,ans,temp);
     solve(node->right,ans,temp);
       //temp.pop_back();


}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root==0)return ans;
          string temp;
        solve(root,ans,temp);
        return ans;
    }
};
