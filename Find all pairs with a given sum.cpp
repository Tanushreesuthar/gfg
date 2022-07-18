class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i=0;i<M;i++){
            mp[B[i]]++;
        }
        for(int i=0;i<N;i++){
            if(mp[X-A[i]]>0)
                v.push_back({A[i],X-A[i]});
        }
        sort(v.begin(),v.end());
        return v;
    }
};
