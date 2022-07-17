bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if(str1.size()!=str2.size())
            return false;
        unordered_map<char,int>mp,mp1;
        for(auto x : str1)
            mp[x]++;
        int temp = 0;
        for(auto x : str2){
            // cout<<mp[x]<<" "<<x<<endl;
            if(mp[x]>0)
                mp[x]--;
            else
                temp++;
        }
        // cout<<temp<<endl;
        if(temp<=k)
            return true;
        return false;
    }
    
