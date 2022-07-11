vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    vector<int>ans;
    set<int>s;
    for(int i =0 ;i<n;i++){
        if(s.size()>0){
            auto it = s.lower_bound(arr[i]);
            if(it==s.begin())
                ans.push_back(-1);
            else
                ans.push_back(*(--it));
        }
        else
            ans.push_back(-1);
        s.insert(arr[i]);
    }
    return ans;
}
