vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i = 0;
        int j =0 ;
        long long sum =0 ;
        while(j<n){
            // cout<<sum<<" "<<s<<endl;
            sum+=arr[j];
            if(sum==s)
                return {i+1,j+1};
            if(sum>s){
                while(sum>s&&i<=j){
                    sum-=arr[i];
                    i++;
                }
                if(sum==s&&i<=j)
                return {i+1,j+1};
            }
            j++;
        }
        return {-1};
    }
