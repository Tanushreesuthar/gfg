 public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        v.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            // cout<<v[v.size()-1]<<" "<<a[i]<<endl;
            if(v[v.size()-1]<=a[i])
                v.push_back(a[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
