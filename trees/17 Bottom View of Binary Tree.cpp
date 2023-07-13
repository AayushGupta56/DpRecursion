class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
        if(root==0)return ans;
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.empty()==false){
            auto it=q.front();
            q.pop();
            Node*node=it.first;
            int line=it.second;
            m[line]=node->data;
            if(node->left!=0)q.push({node->left,line-1});
            if(node->right!=0)q.push({node->right,line+1});
             }
             for(auto it:m){
                 ans.push_back(it.second);
             }
             return ans;
    }
};
