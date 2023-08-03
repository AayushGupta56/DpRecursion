

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 
     long long int start=0;
     long long int end=0;vector<long long >negative;vector<long long>ans;
     while(end<n){
         if(arr[end]<0)negative.push_back(arr[end]);
         if(end-start+1<k){
             end++;
         }
        else if(end-start+1==k){
             if(negative.empty()==true)ans.push_back(0);
             else{
                 ans.push_back(negative.front());
                 if(arr[start]==negative.front())negative.erase(negative.begin());
             }
             
            start++;end++;  
         }
        
     }
     return ans;



 }
