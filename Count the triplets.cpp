class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int>mp;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    int count =0 ;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(mp[arr[i]+arr[j]]>0)
	                count++;
	        }
	    }
	    return count;
	    // Your code goes here
	}
};
