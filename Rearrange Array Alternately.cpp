    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int mini=0;
    	int maxj = n-1;
    	int ind = 0;
    	int me = arr[n-1]+1;
    	while(ind<n){
    	    if(ind%2==0){
    	        arr[ind] = arr[ind]+(arr[maxj]%me)*me;
    	        maxj--;
    	    }else{
    	        arr[ind] = arr[ind]+(arr[mini]%me)*me;
    	        mini++;
    	    }
    	    ind++;
    	}
    	for(int i=0;i<n;i++){
    	    arr[i] = arr[i]/me;
    	}
    }
};
