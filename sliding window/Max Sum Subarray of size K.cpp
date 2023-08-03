class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int n){
        // code here 
        long start=0;long end=0;long ans=LONG_MIN;long sum=0;
        while(end<n){
            sum=sum+arr[end];
            if(end-start+1<K)end++;
            else if(end-start+1==K){
                ans=max(ans,sum);
                sum=sum-arr[start];
                start++;end++;
            }
            
            
        }
        return ans;
    }
};
