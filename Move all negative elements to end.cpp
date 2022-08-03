void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int temp[n];
        int ind = 0;
        for(int i =0 ;i<n;i++)
        {
            if(arr[i]>=0)
                temp[ind++] = arr[i]; 
        }
        for(int i =0 ;i<n;i++)
        {
            if(arr[i]<0)
                temp[ind++] = arr[i]; 
        }
        copy(temp,temp+n,arr);
    }
