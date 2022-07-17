class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int i = 0;
    int j = 0;
    unordered_map<char,int>mp;
    int len = -1;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()==k){
            len = max(len,(j-i+1));
        }
        if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
        }
        j++;
    }
    return len;
    }
};
