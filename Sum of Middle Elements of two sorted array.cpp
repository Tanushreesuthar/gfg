class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
        sort(ar1,ar1+n);
        sort(ar2,ar2+n);
        int i = 0;
        int j = 0;
        int ind = n-1;
        while(i<n&&j<n){
            if(i+j==ind)
            {
                int temp =INT_MAX;
                if(i<n-1)
                    temp = ar1[i]+ar1[i+1];
                if(j<n-1){
                    if(temp>0)
                        temp = min(temp,ar2[j]+ar2[j+1]);
                }
                temp = min(temp,ar2[j]+ar1[i]);
                return temp;
            }
            else if(ar1[i]<=ar2[j])
                i++;
            else
                j++;
        }
        return 0;
           
    }
};
