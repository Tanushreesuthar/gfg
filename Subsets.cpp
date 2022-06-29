class Solution
{
    public:
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int> >ans;
        int temp = pow(2,A.size())-1;
        vector<int>v;
        ans.push_back(v);
        for(int i=1;i<=temp;i++){
            vector<int>v;
            bitset<20>b(i);
            string ss = b.to_string();
            reverse(ss.begin(),ss.end());
            int t= 0;
            for(int j=0;j<A.size();j++){
                // cout<<ss[t]<<endl;
                if(ss[t]=='1'){
                    v.push_back(A[j]);
                }
                t++;
            }
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
