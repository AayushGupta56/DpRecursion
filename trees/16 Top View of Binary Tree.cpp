class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {    vector<int>ans;
    if(root==0)return ans;
        queue<pair<int,Node*>>q;
        map<int,int>m;
        q.push({0,root});
        
        while(q.empty()==false){
            
            auto it=q.front();
            q.pop();
            Node*node=it.second;
            int line=it.first;
            if(m.find(line)==m.end())m[line]=node->data;
            
              if(node->left!=NULL)q.push({line-1,node->left});
              if(node->right!=NULL)q.push({line+1,node->right});
           }
           for(auto it:m){
               ans.push_back(it.second);
           }
           return ans;
    }

};

