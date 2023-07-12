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
    void pin(TreeNode*node,vector<int>&ans){
       if(node==0){ans.push_back(0);return;}
       ans.push_back(node->val);
       pin(node->left,ans);
         
       pin(node->right,ans);
    }
    void qin(TreeNode*node,vector<int>&ans){
       if(node==0){ans.push_back(0);return;}
       ans.push_back(node->val);
       qin(node->left,ans);
      
       qin(node->right,ans);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>pans;vector<int>qans;
        pin(p,pans);qin(q,qans);
        if(pans.size()!=qans.size())return false;
        for(int i=0;i<pans.size();i++){
            if(pans[i]!=qans[i])return false;
        }
        return true;

    }
};
