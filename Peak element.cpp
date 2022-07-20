  public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n==1)
        return 0;
       int peak = -1;
       for(int i=1;i<n-1;i++){
           if(arr[i-1]<=arr[i]&&arr[i]>arr[i+1])
            peak = i;
       }
       if(peak==-1&&n>=2){
           if(arr[0]>=arr[1])
            return 0;
            if(arr[n-2]<=arr[n-1])
                return n-1;
       }
       return peak;
    }
