
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        if(n==1) return 0;
        int mini , maxi;
           sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
     
            for(int i=1;i<n;i++)
            {
                if(arr[i]-k<0) continue;
                
                mini=min(arr[0]+k, arr[i]-k);
                //cout<<mini<<"=mini"<<endl;
                maxi=max(arr[n-1]-k ,arr[i-1]+k );
               // cout<<maxi<<"=maxi"<<endl;
                diff=min(diff, maxi-mini);
                //cout<<diff<<"=diff"<<endl;
            }
        
        
        return diff;
        
    }
};
