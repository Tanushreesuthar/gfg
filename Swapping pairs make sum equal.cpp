int findSwapValues(int A[], int n, int B[], int m)
	{
        sort(A,A+n);
        sort(B,B+m);
        int sum1 = accumulate(A,A+n,0);
        int sum2 = accumulate(B,B+m,0);
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++)
            mp[B[i]]++;
        int diff = abs(sum1-sum2);
        if(diff%2==1)
            return -1;
        int i=0,j=m-1;
        for(int i=0;i<n;i++){
            if(diff==0){
                if(mp.find(A[i])!=mp.end())
                    return 1;
            }else if(A[i]<diff){
                if(mp.find(diff-A[i])!=mp.end())
                    return 1;
            }
        }
        // cout<<sum1<<" "<<sum2<<endl;
        return -1;
        }
};
