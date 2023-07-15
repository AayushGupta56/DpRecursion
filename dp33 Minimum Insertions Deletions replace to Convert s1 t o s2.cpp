class Solution {
public:

   int solve(int i,int j,string&s1,string &s2,vector<vector<int>>&dp){
         if(i<0)return j+1;
         if(j<0)return i+1;
     if(dp[i][j]!=-1)return dp[i][j];
    if(s1[i]==s2[j]){
        return dp[i][j]=0+solve(i-1,j-1,s1,s2,dp);
    }
    int a=1+solve(i,j-1,s1,s2,dp);//insert
    int b=1+solve(i-1,j,s1,s2,dp);//delete
    int c=1+solve(i-1,j-1,s1,s2,dp);//replace
    return dp[i][j]=min(a,min(b,c));

   }
    int minDistance(string s1, string s2) {
        int n=s1.size();int m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s1,s2,dp);
    }
};
