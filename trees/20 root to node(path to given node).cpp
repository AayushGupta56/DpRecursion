/**
 * Definition for binary Tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool solve1(TreeNode* root,vector<int> &ans,int B){
        if(root==0)return  false;
         ans.push_back(root->val);
         if(root->val==B)return true;
         if(solve1(root->left,ans,B)==true)return true;
         if(solve1(root->right,ans,B)==true)return true;
         ans.pop_back();
         return false;
        
 }
vector<int> Solution::solve(TreeNode* A, int B) {
vector<int>ans;
solve1(A,ans,B);
return ans;
} 
