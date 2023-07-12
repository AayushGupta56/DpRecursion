  bool isleaf(TreeNode<int>* root){
        if(root->left==NULL&&root->right==NULL)return true;
        return false;
    }

    void leftboundary(TreeNode<int>* node,vector<int>&ans){
          node=node->left;
          while(node!=NULL){
              if(isleaf(node)==false)ans.push_back(node->data);
              if(node->left!=NULL)node=node->left;
              else node=node->right;
          }
      
    }
    void leaf(TreeNode<int>* node,vector<int>&ans){
    if(isleaf(node)==true){ans.push_back(node->data);return;}
     if(node->left!=NULL) leaf(node->left,ans);
     if(node->right!=NULL) leaf(node->right,ans);

    }
      void rightboundary(TreeNode<int>* node,vector<int>&ans){
           node=node->right;
           while(node!=NULL){
               if(isleaf(node)==false)ans.push_back(node->data); 
               if(node->right!=NULL)node=node->right;
               else node=node->left;
           }

      }
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
     vector<int>ans;
     if(root==NULL)return ans;
    if(isleaf(root)==false)ans.push_back(root->data);
     leftboundary(root,ans);
     leaf(root,ans);
    vector<int>temp;
     rightboundary(root,temp);
     reverse(temp.begin(),temp.end());
     for(int i=0;i<temp.size();i++){

         ans.push_back(temp[i]);
     }
      
       
     return ans;

}
