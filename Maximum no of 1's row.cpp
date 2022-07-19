   int maxOnes (vector <vector <int>> &Mat, int n, int m)
        {
            // your code here
            int ans = INT_MIN;
            int ind = -1;
            for(int i=0;i<n;i++){
                int sum = accumulate(Mat[i].begin(),Mat[i].end(),0);
                // cout<<sum<<" "<<i<<endl;
                if(sum>ans){
                    ind =i;
                    ans =sum;
                }
            }
            return ind;
        }
