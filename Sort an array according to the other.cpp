class Solution{
    public:
    
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        unordered_map<int,int>mp;
        for(auto x:A1)
            mp[x]++;
        vector<int>v;
        vector<int>temp;
        for(auto x:A2){
            if(mp[x]>0){
                while(mp[x]>0){
                    v.push_back(x);
                    mp[x]--;
                }
            }
        }
        
        for(auto x:A1){
            if(mp[x]>0)
                temp.push_back(x);
        }
        
        sort(temp.begin(),temp.end());
        
        for(auto x:temp)
            v.push_back(x);
        return v;
    } 
};
