 vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        
        int i = 0;
        int j = arr.size()-1;
        int temp1 = -1;
        int temp2 = -1;
        int temp = -1;
        while(i<j){
            int t = arr[i]+arr[j];
           
            if(temp==-1){
                temp1 = arr[i];
                temp2 = arr[j];
                temp = t;
            }
            else{
                if(abs(t-x)<abs(temp-x)){
                    temp = t;
                    temp1 = arr[i];
                    temp2 = arr[j];
                }
                
            }
                if(t>x)
                    j--;
                else
                    i++;
        }
        return {temp1,temp2};
    }
