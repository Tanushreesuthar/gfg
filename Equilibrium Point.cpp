#include<bits/stdc++.h>
class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    long long int netsum = accumulate(a,a+n,0);
    long long int sum = 0;
    for(int i=0;i<n;i++){
        int temp = netsum-a[i];
        if(i==0){
            if(temp==0)
                return i+1;
        }
        else{
            if(sum == temp-sum )
                return i+1;
        }
        sum+=a[i];
    }
        return -1;
        // Your code here
    }
