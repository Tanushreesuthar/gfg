class Solution{
  public:
    int minJumps(int arr[], int n){
           if(n==1)
            return 0;
            if(arr[0]==0)
                return -1;
       int temp = arr[0];
       int steps = arr[0];
       int count = 1;
       for(int i=1;i<n-1;i++){
           temp = max(temp,arr[i]+i);
           steps--;
            if(temp==n)
                return count+1;
            if(steps==0){
                count++;
                if(i>temp-1)
                    return -1;
                steps = temp-i;
            }
           
       }
       return count;
    }
};
